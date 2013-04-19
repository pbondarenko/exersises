#include <stdio.h>
#include <string.h>

extern char * get_input ();
extern char * detab(char *);

int main () {
	char * line;
	line = get_input();
		
	if(!line)
		return 0;
	char * to_print = detab(line);
	printf("%s\n", to_print);
	free(to_print);
	free(line);
	
	return 0;
}

