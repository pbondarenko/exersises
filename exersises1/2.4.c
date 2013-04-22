#include <stdio.h>
#include <string.h>
#define NMAX 1000
void get_line(char[]);
void squeeze(char[], char[]);
int main() {
	char s1[NMAX];
	char s2[NMAX];
	for(;;) {
		get_line(s1);
		get_line(s2);
		squeeze(s1, s2);
		printf("%s\n", s1);
	}
	return 0;
}
void squeeze(char s1[], char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0, j;
	int szs1 = 0;
	for (i = 0; i < len1; ++i) {
		j = 0;

		for(j = 0; j < len2; ++j) {
			if (s1[i] == s2[j]) {
				goto was;
			}
		}
		s1[szs1++] = s1[i];
		was:;

	}
	s1[szs1] = '\0';
}
void get_line(char a[]) {
	int i = 0;
	char c;
	for(i = 0; i < NMAX && (c = getchar()) != EOF && c != '\n'; ++i)
		a[i] = c;
	a[i] = '\0';

}
