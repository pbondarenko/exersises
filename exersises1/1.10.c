#include <stdio.h>

int main () {

	int c;
	for (; (c = getchar()) != EOF;) {
		switch (c) {
			case '\t':
				putchar('\\');
				putchar('t');
				break;
			case '\b':
				putchar('\\');
				putchar('b');
				break;
			default:
				putchar(c);
				break;
		}
	}
	return 0;
}
