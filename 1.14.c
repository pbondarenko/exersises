#include <stdio.h>
#include <memory.h>
#define MAXLEN 256
int main () {
	int cnt[MAXLEN];
	int c;
	memset(cnt, 0, sizeof(cnt));

	int cur_len;

	for(cur_len = 0;(c = getchar()) != '\n';) {
		++cnt[c];
	}
	for (c = 0; c < MAXLEN; ++c) {
		int i;
		if (cnt[c] > 0) {
			putchar(c);
			for (i = 0; i < cnt[c]; ++i) {
				putchar('_');
			}
			putchar('\n');
		}
	}
	return 0;
}