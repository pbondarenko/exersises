#include <stdio.h>
char lower (char c);
int main() {
	char c;
	for(;(c = getchar()) != EOF;) {
		putchar(lower(c));
	}
	return 0;
}
char lower(char c) {
	return (('A' <= c && c <= 'Z') ?(c - 'A' + 'a'):(c));
}
