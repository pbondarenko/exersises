#include <stdio.h>
#include <string.h>

char * copy (char *);
extern char * get_line();

int main () {

	int max_len = 0;
	max_string = malloc(1);
	int len;

	char * line;
	for (max_len = 0; len = strlen((line = get_line())) > 0;) {

		if (max_len < len) {
			max_len = len;
			max_string = copy(line);

		}
		free(line);
	}
	printf("%s\n", max_string);
	free(max_string);
	return 0;
}
char * copy (char * line) {
	int len = strlen(line);
	char * max_string = (char *) realloc(max_string, len);

	memcpy(max_string, line, len);
	return max_string;
}

