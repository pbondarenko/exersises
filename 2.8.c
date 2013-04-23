#include <stdio.h>
int rightroot(int, int);
int main() {

	int x, n;
	scanf("%d%d", &x, &n);
	int res = rightroot(x, n);
	printf("%d\n", res);
	return 0;
}
int rightroot(int x, int n) {
	return (x >> n) ^ ((x & ((1 << n) - 1)) << (31 - n));
}
