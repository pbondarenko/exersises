#include <stdio.h>
#include "my_lib.h"



int main () {

	char * line  = get_line();
	int to_print = htol(line);
	printf("%d\n", to_print);
		
	free(line);
	

	return 0;
}
