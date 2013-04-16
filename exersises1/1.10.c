#include <stdio.h>

int main () {
/*
	printf("abcd\tavbd");
	putchar('\b');
	putchar('\b');
	putchar('\n');
	return 0;*/
	int c;
	for (; (c = getchar()) != EOF;) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else {
			if (c == '\b') {
				putchar('\\');
				putchar('b');
			}
			else {
				putchar(c);
			}
		}
	}
	return 0;
}
