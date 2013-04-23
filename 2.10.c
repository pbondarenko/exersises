#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	for(;(c = getchar()) != EOF;) {
		putchar(tolower(c));
	}
	return 0;
}
