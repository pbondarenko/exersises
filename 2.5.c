#include <stdio.h>
#include <string.h>
#define NMAX 1000
void get_line(char[]);
int any(char[], char[]);
int main() {
	char s1[NMAX];
	char s2[NMAX];
	for(;;) {
		get_line(s1);
		get_line(s2);

		printf("%d\n", any(s1, s2));
	}
	return 0;
}
int any(char s1[], char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0, j;
	for (i = 0; i < len1; ++i) {
		j = 0;

		for(j = 0; j < len2; ++j) {
			if (s1[i] == s2[j]) {
				return i;
			}
		}


	}
	return -1;
}
void get_line(char a[]) {
	int i = 0;
	char c;
	for(i = 0; i < NMAX && (c = getchar()) != EOF && c != '\n'; ++i)
		a[i] = c;
	a[i] = '\0';

}
