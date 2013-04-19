#include <stdio.h>
#define TAB 7

extern char * get_input ();
extern char * entab (char *);

int main () {


	int len;
	char * line;

	line = get_input();
	if(!line)
		return 0;
	char * to_print = entab(line);
	printf("%s\n", to_print);
	free(line);
	free(to_print);
	return 0;
}

