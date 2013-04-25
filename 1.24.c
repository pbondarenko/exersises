#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h" 

int main() {
	char * line = get_input();
	if(line == NULL) {
		return 0;	
	}
	good_c_answer result = good_c (line);
	switch (result) {
		case OK: puts("No stupid errors"); break;
		case ERROR_COMMENTS: puts("Error in comments"); break;
		case ERROR_ESCAPE: puts("Error in escape sequences"); break;
		case ERROR_CHAR: puts("Error in char constants"); break;
		case ERROR_STRING: puts("Error in string constants"); break;
		case ERROR_BRACKET: puts("Error in brackets"); break;
		default: puts("Unknown error"); break;
	}
//	printf("%s\n", result);
	free(line);
//	free(result);

	return 0;
}

