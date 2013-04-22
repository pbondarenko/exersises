#include "my_lib.h"

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

