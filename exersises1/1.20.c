#include <stdio.h>
#include <string.h>
#define TAB 7
extern char * get_line ();


int main () {


	int len;
	char * line;


	for (; ;) {
		int len = strlen(line = get_line());
		detab(line);
		free(line);
	}

	return 0;
}
void detab (char * line) {
	int i, j;
	int len = strlen(line);
	for (i = 0; i < len; ++i) {
		if (line[i] == '\t') {
			for (j = 0; j < TAB; ++j) {
				putchar(' ');
			}
		} else {
			putchar(line[i]);
		}
	}
	putchar('\n');
}
