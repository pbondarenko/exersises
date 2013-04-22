#include "my_lib.h"

int main () {

	int max_len = 0;
	char * max_string = malloc(1);
	max_string[0] = '\0';
	int len;

	char * line;
	for (max_len = 0; len = strlen((line = get_line())) > 0;) {

		if (max_len < len) {
			max_len = len;
			max_string = strdup(line);

		}
		free(line);
	}
	printf("%s\n", max_string);
	free(max_string);
	return 0;
}

