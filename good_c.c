#include "my_lib.h"

good_c_answer good_c (char * line) {
	char * line_without_comments = delete_comments(line);
	if (!line_without_comments) {	
		return ERROR_COMMENTS;
	}
	char * line_without_escape = delete_escape(line_without_comments);
	free(line_without_comments);
	if (!line_without_escape) {
		return ERROR_ESCAPE;
	}
	char * line_without_char = delete_char(line_without_escape);
	free(line_without_escape);
	if (!line_without_char) {
		return ERROR_CHAR;
	}
	char * line_without_string = delete_string(line_without_char);
	free(line_without_char);
	if (!line_without_string) {
		return ERROR_STRING;
	}
	char * line_without_brackets = delete_brackets(line_without_string);
	free(line_without_string);
	if (!line_without_brackets) {
		return ERROR_BRACKET;
	}	
	free(line_without_brackets);
	return OK;
}
