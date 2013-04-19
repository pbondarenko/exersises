#include <stdio.h>
#include <memory.h>
#define IN 1
#define OUT 0
#define MAXLEN 1000
int main () {
	int cnt[MAXLEN];
	int c;
	
	memset(cnt, 0, sizeof(cnt));
	int cur_len;
	int state = OUT;
	for(cur_len = 0;(c = getchar()) != '\n';) {
		if (c == ' ' || c == '\t' || c == '\n' ) {
			if (state == IN) {
				++cnt[cur_len];
				state = OUT;
				cur_len = 0;
			}
		} else {
			++cur_len;
			putchar(c);
			state = IN;
		}
	}
	for (c = 0; c < MAXLEN; ++c) {
		if (cnt[c] > 0) {
			int i;
			for (i = 0; i < cnt[c]; ++i) {
				putchar('_');
			}
			putchar('\n');
		}
	}
	return 0;
}
