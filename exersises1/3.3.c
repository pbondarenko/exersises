#include <stdio.h>
#include <string.h>
#define NMAX 1000
void expand(char[], char[]);
void get_line(char[]);
int main() {
	char s1[NMAX], s2[NMAX];
	get_line(s1);
	expand(s1, s2);
	printf("%s\n", s2);
	return 0;
}
void get_line(char s[]) {
	int c;
	int i;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	s[i] = '\0';
}
void expand(char s1[], char s2[]) {
	int len = strlen(s1);
	int i;
	int szs2 = 0;
	for (i = 0; i < len; ++i) {
		if(s1[i] == '-' && i > 0 && i < len - 1 && isdigit(s1[i-1]) == isdigit(s1[i+1])
				&& isalpha(s1[i-1]) == isalpha(s1[i+1]) && s1[i - 1] <= s1[i + 1]) {
			char c;
			for (c = s1[i-1] + 1; c <= s1[i+1]; c++) {
				s2[szs2++] = c;
			}
			++i;
		} else {
			s2[szs2++] = s1[i];
		}
	}
	s2[szs2] = '\0';
}
