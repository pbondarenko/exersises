#include "my_lib.h"

char * good_c (char * line) {
	char * line_without_comments = delete_comments(line);
	if (!line_without_comments) {	
		return "error in comments";
	}
	char * line_without_escape = delete_escape(line_without_comments);
	free(line_without_comments);
	if (!line_without_escape) {
		return "error in escape-sequence";
	}
	char * line_without_char = delete_char(line_without_escape);
	free(line_without_escape);
	if (!line_without_char) {
		return "error in char constants";
	}
	char * line_without_string = delete_string(line_without_char);
	free(line_without_char);
	if (!line_without_string) {
		return "error in string constants";
	}
	char * line_without_brackets = delete_brackets(line_without_string);
	free(line_without_string);
	if (!line_without_brackets) {
		return "error in brackets";
	}	
	free(line_without_brackets);
	return "that's c-programm without stupid errors";
}
