#include <stdio.h>
#define IN 1
#define OUT 0

int main () {
	int state = OUT;
	int c;
	int nw = 0;
	for(;(c = getchar()) != EOF;) {
		if (c == ' ' || c == '\t' || c == '\n' ) {
			if (state == IN) {
				++nw;
				state = OUT;
			}
		} else {
			state = IN;
		}
	}
	if (state == IN) {
		++nw;
		state = OUT;
	}
	printf("%d\n", nw);
	return 0;
}
