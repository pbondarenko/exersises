#include <stdio.h>
#include <string>

extern char * get_line();


int main () {


	int len;

	char line;
	for (; (len = strlen(line = get_line())) > 0;) {
		if (len > 80) {
			printf("%s\n", line);
		}
		free(line);
	}

	return 0;
}

