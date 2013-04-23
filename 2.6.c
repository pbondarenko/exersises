#include <stdio.h>
int setbits(int, int, int, int);
int main() {

	int x, y, n, p;
	scanf("%d%d%d%d", &x, &p, &n, &y);
	int res = setbits(x, p, n, y);
	printf("%d\n", res);
	return 0;
}
int setbits(int x, int p, int n, int y) {
	return (((~(((1 << n) - 1) << p))&x)^((((1 << n) - 1)&y) << p));
}
