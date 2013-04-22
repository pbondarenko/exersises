#include "my_lib.h"

int main () {

	char * line = get_input();
	if(!line)
		return 0;
	char * to_print = reverse(line);
	printf("%s\n", to_print);
	free(to_print);
	free(line);
	

	return 0;
}


