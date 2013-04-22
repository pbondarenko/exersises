#include <stdio.h>
int main() {
	int i;
	char s[2000];
	int lim = 2000;
	char c;
	for (i = 0;(i < lim - 1) ? (((c = getchar())!=EOF) ? (c != '\n') : 0) : (0); ++i) {
		s[i] = c;
	}
	printf("%s\n", s);
	return 0;
}
