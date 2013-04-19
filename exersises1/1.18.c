#include <stdio.h>

extern char * get_input ();
extern char * all_spaces_to_one(char *);

int main () {
	char * line;
	line = get_input();
	if(!line)
		return 0;
	char * to_print = all_spaces_to_one(line);
	printf("%s", to_print);
	free(to_print);
	free(line);
	return 0;
}
