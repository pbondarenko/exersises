#include "my_lib.h"
char * reverse (char * line) {
	char * result;
	int i;
	int len = strlen(line);
	
	result = (char *) malloc(len+1);
	//memcpy(result, line, len);
	result[len] = '\0';
	
	for (i = 0; i < len / 2+1; ++i) {
		result[i] = line[len - i - 1];
		result[len - i - 1] = line[i];
	}
	return result;
}
