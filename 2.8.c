#include <stdio.h>
void print_bit (int);
int rightroot(int, int);
int main() {

	int x, n;
	scanf("%d%d", &x, &n);
	print_bit(x);
	int res = rightroot(x, n);
	printf("%d\n", res);
	print_bit(res);
	return 0;
}
int rightroot(int x, int n) {
	return (x >> n) ^ ((x & ((1 << n) - 1)) << (31 - n));
}
void print_bit(int x) {
	int i;
	for(i = 0; i < 31; i++) {
		printf("%d", ((x >> i) & 1));
	}
	putchar('\n');
}
