#include <stdio.h>
#include <limits.h>
#define NMAX 20
void itob(int, char[], int);
int main() {
	int x, b;
	scanf("%d%d", &x, &b);
	//x = INT_MAX;
	char s[NMAX];
	itob(x, s, b);
	printf("%s\n", s);
	return 0;
}
void itob (int x, char s[], int b) {
	int sign = (x < 0) ? (-1) : (1);
	int szs = 0;
	do {
		int d = ((x >= 0) ? (x % b) : (-(x % b)));
		if (d < 10) {
			s[szs++] = d + '0';
		} else {
			s[szs++] = d - 10 + 'a';
		}
		x /= b;
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
