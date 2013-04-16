#include <stdio.h>

extern char * get_line ();
extern void reverse(char *);

int main () {

	for (; ;) {
		char * line = get_line();
		if(!line)
			break;
		reverse(line);
		printf("%s\n", line);
		free(line);
	}

	return 0;
}


