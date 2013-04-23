#include <stdio.h>
#include <memory.h>
int main () {
	int * cnt;
	int cap = 256;
	cnt = (int *)malloc(sizeof(int)*cap);
	memset(cnt, 0, cap*sizeof(int));
	int c;

	int cur_len;

	for(cur_len = 0;(c = getchar()) != '\n';) {
		
		++cnt[c+127];
	}
	for (c = 0; c < cap; ++c) {
		int i;
		if (cnt[c] > 0) {
			putchar(c-127);
			for (i = 0; i < cnt[c]; ++i) {
				putchar('_');
			}
			putchar('\n');
		}
	}
	return 0;
}
