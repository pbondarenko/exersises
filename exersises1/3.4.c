#include <stdio.h>
#include <limits.h>
#define NMAX 20
void itoa(int, char[]);
int main() {
	int x;
	scanf("%d", &x);
	//x = INT_MAX;
	char s[NMAX];
	itoa(x, s);
	printf("%s\n", s);
	return 0;
}
void itoa (int x, char s[]) {
	int sign = (x < 0) ? (-1) : (1);
	int szs = 0;
	do {
		s[szs++] = '0' + ((x >= 0) ? (x % 10) : (-(x % 10)));
		x /= 10;
	} while (x != 0);
	if (sign < 0) {
		s[szs++] = '-';
	}
	s[szs] = '\0';
	int i;
	for (i = 0; i < szs / 2; ++i) {
		char tmp = s[i];
		s[i] = s[szs - i - 1];
		s[szs - i - 1] = tmp;
	}

}
