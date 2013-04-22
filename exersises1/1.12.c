#include <stdio.h>
#define IN 1
#define OUT 0
int main () {
	int state = OUT;
	int c;

	for(;(c = getchar()) != '\n';) {
		if (c == ' ' || c == '\t' || c == '\n' ) {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		} else {
			putchar(c);
			state = IN;
		}
	}
	return 0;
}
