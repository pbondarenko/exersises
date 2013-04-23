#include <stdio.h>
void print_bit (int);
int invert(int, int, int);
int main() {

	int x, n, p;
	scanf("%d%d%d", &x, &p, &n);
	print_bit(x);
	int res = invert(x, p, n);
	printf("%d\n", res);
	print_bit(res);
	return 0;
}
int invert(int x, int p, int n) {
	return ((((1 << n) - 1) << p)^x);
}
void print_bit(int x) {
	do {
		printf("%d", x&1);
		x >>= 1;
	} while (x > 0);
	putchar('\n');
}
