#include <stdio.h>
#include <string.h>
#define TAB 7

extern char * get_line ();


int main () {


	int len;
	int n;
	scanf("%d\n", &n);
	char * line;
	for (; ;) {
		line = get_line();
		print(line, n);
		free(line);
	}

	return 0;
}
void print(char * line, int n) {
	int i;
	int len = strlen(line);
	int * have_space = (int *) malloc(len * sizeof(int));
	for (i = 0; i < len; ++i) {
		if (line[i] == ' ' || line[i] == '\t') {
			have_space[i] = i;
		} else {
			have_space[i] = (i > 0) ? have_space[i - 1] : -1;
		}
	}
	for (i = 0; i < len; ++i) {
		if(i + n >= len) {
			putchar(line[i]);
		} else {
			int last;
			if(have_space[i + n] < i) {
				last = i + n;

			} else {
				last = have_space[i+n];
			}
			int j;
			for (j = i; j < last; ++j)
				putchar(line[j]);
			i = last - 1;
			putchar('\n');
		}
	}
	putchar('\n');
}
