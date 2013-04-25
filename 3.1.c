#include "my_lib.h"


int main() {
	int n;
	int * v;
	int x;
	int i;
	scanf("%d%d", &n, &x);
	v = (int *) malloc(sizeof(int) * n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &v[i]);
	}
	printf("%d\n", binsearch(x, v, n));
	return 0;
}
