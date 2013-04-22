#include <stdio.h>
void print_bit (int);
int setbits(int, int, int, int);
int main() {

	int x, y, n, p;
	scanf("%d%d%d%d", &x, &p, &n, &y);
	print_bit(x);
	print_bit(y);
	int res = setbits(x, p, n, y);
	printf("%d\n", res);
	print_bit(res);
	return 0;
}
int setbits(int x, int p, int n, int y) {
	return (((~(((1 << n) - 1) << p))&x)^((((1 << n) - 1)&y) << p));
}
void print_bit(int x) {
	do {
		printf("%d", x&1);
		x >>= 1;
	} while (x > 0);
	putchar('\n');
}
