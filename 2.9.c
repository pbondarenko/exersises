#include <stdio.h>
int bitcount(int);
int main() {

	int x;
	scanf("%d", &x);
	printf("%d\n", bitcount(x));

	return 0;
}
int bitcount(int x) {
	int res = 0;
	for(;x > 0; x &= (x-1)) {
		++res;
	}
	return res;
}
