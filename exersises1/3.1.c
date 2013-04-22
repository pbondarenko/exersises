#include <stdio.h>
#define NMAX 1000
int binsearch(int, int[], int);
int main() {
	int n;
	int v[NMAX];
	int x;
	int i;
	scanf("%d%d", &n, &x);
	for (i = 0; i < n; ++i) {
		scanf("%d", &v[i]);
	}
	printf("%d\n", binsearch(x, v, n));
	return 0;
}
int binsearch(int x, int v[], int n) {
	int lf = 0, rg = n - 1;
	while (rg - lf > 1) {
		int mid = (lf + rg) >> 1;
		if (v[mid] >= x) {
			rg = mid;
		} else
			lf = mid;
	}
	return (v[rg] == x) ? (rg) : ((v[lf] == x)?(lf):(-1));
}
