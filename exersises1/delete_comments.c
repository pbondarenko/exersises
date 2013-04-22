#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * delete_comments(char * line) {
	int i;
	int len = strlen(line);
	char * result = (char * ) malloc(len);
	int sz_result = 0;
	int in_comm_, in_string, in_symb, in_comm;
	for (in_comm_ = in_string = in_symb = in_comm = i = 0; i < len; ++i) {
		if(in_comm) {
			if (line[i] == '\n'){
				in_comm = 0;
			}	
			continue;
		}
		if(in_comm_) {
			if (line[i] == '*' && i > 0 && line[i-1] == '/') {
				free(result);	
				return NULL;
			}
			if (line[i] == '/' && i > 0 && line[i-1] == '*') {
				in_comm_ = 0;
			}
			continue;
		}
		if (in_string) {
			if (line[i] == '\\') {
				result[sz_result++] = line[i];

				result[sz_result++] = line[i+1];
				++i;
				continue;
			}
			if (line[i] == '\"') {
				result[sz_result++] = line[i];
				in_string = 0;
				continue;
			}
			result[sz_result++] = line[i];
			continue;
		}
		if (in_symb) {
			if (line[i] == '\\') {
				result[sz_result++] = line[i];

				result[sz_result++] = line[i+1];
				++i;
				continue;
			}
			if (line[i] == '\'') {
				result[sz_result++] = line[i];
				in_symb = 0;
				continue;
			}
			result[sz_result++] = line[i];
			continue;
		}

		if (line[i] == '\"') {
			in_string = 1;
			result[sz_result++] = line[i];
			continue;
		}
		if(line[i] == '\'') {
			in_symb = 1;
			result[sz_result++] = line[i];
			continue;
		}
		if (line[i] == '/' && i < len - 1 && line[i + 1] == '/') {
			in_comm = 1;
			continue;
		}
		if (line[i] == '/' && i < len - 1 && line[i + 1] == '*') {
			in_comm_ = 1;
			i++;
			continue;
		}
		result[sz_result++] = line[i];
	}

	if (in_comm_) {
		free(result);
		return NULL;
	}
	result[sz_result] = '\0';
	result = (char * ) realloc(result, sz_result + 1);
	return result;
}
