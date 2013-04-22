#include <stdio.h>
#include <string.h>
#define NMAX 1000
void escape(char[], char[]);
void get_line(char[]);
int main() {
	char s[NMAX], t[NMAX];
	get_line(t);
	escape(s, t);
	printf("%s\n", s);
	return 0;
}
void escape(char s[], char t[]) {
	int len = strlen(t);
	int szs = 0;
	int i;
	for (i = 0; i < len; ++i) {
		switch(t[i]) {
		case '\t':
			s[szs++] = '\\';
			s[szs++] = 't';
			continue;
		case '\n':
			s[szs++] = '\\';
			s[szs++] = 'n';
			continue;
		default:
			s[szs++] = t[i];
		}
	}
	s[szs] = '\0';
}
void get_line(char t[]) {
	int i;
	char c;
	for (i = 0;(c = getchar()) != EOF && c != 'E'; ++i) {
		t[i] = c;
	}
	t[i] = '\0';
}
