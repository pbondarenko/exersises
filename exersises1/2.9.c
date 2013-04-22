#include <stdio.h>
void print_bit (int);
int bitcount(int);
int main() {

	int x;
	scanf("%d", &x);
	print_bit(x);
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
void print_bit(int x) {
	int i;
	for(i = 0; i < 31; i++) {
		printf("%d", ((x >> i) & 1));
	}
	putchar('\n');
}
