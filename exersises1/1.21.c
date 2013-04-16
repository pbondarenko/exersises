#include <stdio.h>
#define TAB 7

extern char * get_line ();


int main () {


	int len;
	char * line;

	for (; ;) {
		len = strlen(line = get_line());
		entab(line);
		free(line);
	}

	return 0;
}
void entab (char * line) {
	int i, j;
	int cnt_space = 0;
	int len = strlen(line);
	for (i = 0; i < len; ++i) {
		if (line[i] == '\t') {
			cnt_space += TAB;
		} else {
			if (line[i] == ' ') {
				cnt_space += 1;
			} else {
				for (j = 0; j < cnt_space / TAB; ++j) {
					putchar('\t');
				}
				for (j = 0; j < cnt_space % TAB; ++j) {
					putchar(' ');
				}
				cnt_space = 0;
				putchar(line[i]);
			}


		}
	}
	for (j = 0; j < cnt_space / TAB; ++j) {
		putchar('\t');
	}
	for (j = 0; j < cnt_space % TAB; ++j) {
		putchar(' ');
	}
	putchar('\n');
}
