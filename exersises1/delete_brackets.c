#include<string.h>

#include <stdio.h>
#include <stdlib.h>

char * delete_brackets (char * line) {
	int len = strlen(line);
	int i;
	int sz_result = 0;
	char * result = (char *) malloc(len + 1);
	
	char * brackets = (char *) malloc(len+1);
	int top = -1;
	for (i = 0; i < len; ++i) {
		switch (line[i]) {
			case '(': brackets[++top] = line[i]; break;
			case ')': 
				if (top < 0 || brackets[top] != '(') {
					free(result);
					free(brackets);	
					return NULL;
				} 
				top--;
				break;
			case '{':brackets[++top] = line[i]; break;
			case '}':
                               if (top < 0 || brackets[top] != '{') {
                                        free(result);
					free(brackets);
                                        return NULL;
                                }
                                top--;
				break;
			case '[':brackets[++top] = line[i]; break;
			case ']':
                               if (top < 0 || brackets[top] != '[') {
                                        free(result);
					free(brackets);
                                        return NULL;
                                }
                                top--;
				break;
			default: result[sz_result++] = line[i]; break;
		}

	}
	
	free(brackets);

	if(top != -1) {
		free(result);
		return NULL;
	}	
	result[sz_result] = '\0';
	result = (char * ) realloc(result, sz_result + 1);
	return result;
} 
