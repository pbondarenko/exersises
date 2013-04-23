#include "my_lib.h"

int main () {


	int len;
	int n;
	char * line = get_input();
	if(!line){
		return 0;	
	}
	char * to_print = delete_comments(line);
	if(!to_print){
		printf("Incorrect input\n");
		free(line);
		return 0;
	}
	printf("%s\n", to_print); 
	free(to_print);
	free(line);

	return 0;
}

