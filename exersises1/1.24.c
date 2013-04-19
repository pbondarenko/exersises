#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h" 
extern char * good_c(char *);
int main() {
	char * line = get_input();
	if(line == NULL) {
		return 0;	
	}
	char * result = good_c (line);
	printf("%s\n", result);
	free(line);
//	free(result);

	return 0;
}

