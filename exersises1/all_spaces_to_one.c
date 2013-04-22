#include <stdio.h>
#include <string.h>
char * all_spaces_to_one(char * line) {
        int len = strlen(line);
	char * result = (char *) malloc(len+1);
	int sz_result = 0;
        int is_space = 0;
        int i;
        for (i = 0; i < len; i++) {
                if (line[i] == ' ' || line[i] == '\t') {
                        is_space = 1;
                } else {
                        if (is_space) {
                        	result[sz_result++] = ' ';
                        }
                        is_space = 0;
                        result[sz_result++] = line[i];
                }
        }
        if (is_space) {
		result[sz_result++] = ' ';
        }
	result = (char *)realloc(result, sz_result+1);
	result[sz_result] = '\0';
	return result;
}

