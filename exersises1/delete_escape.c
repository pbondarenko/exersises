#include<string.h>
#include <stdio.h>
#include <stdlib.h>

int escape (char c) {
	return c == 't' || c == '\'' || c == '\"' || c == '\?' || c == '\\'
            || c == '0' || c == 'a' || c == 'b' || c == 'n' || c == 'f' || c == 'r' ||
               c == 'v'; 
}
int is_8 (char c) {
	return '0' <= c && c <= '7';
}
int is_16 (char c) {
	return ('0' <= c && c <= '9') || ('A' <= c && c <'F'); 
}
char * delete_escape (char * line) {
	int len = strlen(line);
	int i;
	int sz_result = 0;
	char * result = (char *) malloc(len + 1);
	int in_char = 0, in_string = 0;
	for (i = 0; i < len; ++i) {
		if (in_char || in_string) {
			if (line[i] == '\\' && i < len - 1 && escape(line[i+1])) {
				i++;
				continue;
			}
			if (line[i] == '\\' && i < len - 3 && is_8(line[i+1]) && is_8(line[i+2]) && is_8(line[i+3])) {
				i += 3;
				continue;
			}
			if (line[i] == '\\' && i < len - 3 && line[i+1] == 'x' && is_16(line[i+2]) && is_16(line[i+3])) {
				i += 3;
				continue;
			}
			if (line[i] == '\\'){
				free(result);
				return NULL;
			}
		}
		if (line[i] == '\'') {
			in_char ^= 1;
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
