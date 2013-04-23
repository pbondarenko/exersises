#include <stdio.h>
int invert(int, int, int);
int main() {

	int x, n, p;
	scanf("%d%d%d", &x, &p, &n);
	int res = invert(x, p, n);
	printf("%d\n", res);
	return 0;
}
int invert(int x, int p, int n) {
	return ((((1 << n) - 1) << p)^x);
}
