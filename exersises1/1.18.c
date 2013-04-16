#include <stdio.h>

extern char * get_line ();


int main () {


	int len;
	char * line;

	for (; ;) {
		line = get_line();
		make_string_to_write(line);
		free(line);
	}

	return 0;
}
void make_string_to_write (char * line) {
	int len = strlen(line);
	if(len == 0)
		return;
	int is_space = 0;
	int i;
	for (i = 0; i < len; i++) {
		if (line[i] == ' ' || line[i] == '\t') {
			is_space = 1;
		} else {
			if (is_space) {
				putchar(' ');
			}
			is_space = 0;
			putchar(line[i]);
		}
	}
	if (is_space) {
		putchar(' ');
	}
}
