#include "my_lib.h"
#define IN 1
#define OUT 0
#define MAXLEN 1000
int main () {
	int * cnt;
	int cap;
	char * line = get_line();
	cap = strlen(line)+1;
	cnt = (int *)malloc(sizeof(int) * cap); 
	int state = OUT;
	memset(cnt, 0, sizeof(int)*cap);
	int cur_len, i;
	for(cur_len = 0, i = 0; i < cap; ++i) {
		if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n' ) {
			if (state == IN) {
				++cnt[cur_len];
				state = OUT;
				cur_len = 0;
			}
		} else {
			++cur_len;
			i++;			
			state = IN;
		}
	}
	int c;
	for (c = 0; c < cap+1; ++c) {
		if (cnt[c] > 0) {
			int i;
			for (i = 0; i < cnt[c]; ++i) {
				putchar('_');
			}
			putchar('\n');
		}
	}
	free(cnt);
	return 0;
}
