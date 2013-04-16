#include <stdio.h>

int main () {

	int c;
	int is_prev_space = 0;
	for (; (c = getchar()) != EOF;) {
		if (c == ' ') {
			is_prev_space = 1;
		} else {
			if (is_prev_space) {
				putchar(' ');
			}
			putchar(c);
		}
	}
	return 0;
}
