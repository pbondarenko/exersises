#include "my_lib.h"

char * delete_char (char * line) {
	int len = strlen(line);
	int i;
	int sz_result = 0;
	char * result = (char *) malloc(len + 1);
	int in_char = 0, in_string = 0;
	for (i = 0; i < len; ++i) {
		if (in_char) {
			
			if(line[i] == '\'')
				in_char ^= 1;
			if(line[i] == '\n' || line[i] == '\"') {
				free(result);
				return NULL;
			}
		
			continue;	
		}
		if(in_string) {
			result[sz_result++] = line[i];
			if(line[i] == '\"') {
				in_string ^= 1;
				continue;
			}
			continue;
		}
		if (line[i] == '\'') {
			in_char ^= 1;
			continue;
		}
		if(line[i] == '\"') {
			in_string ^= 1;
		}
		result[sz_result++] = line[i];

	}
	result[sz_result] = '\0';
	result = (char * ) realloc(result, sz_result + 1);
	return result;
} 
