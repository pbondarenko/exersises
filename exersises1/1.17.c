#include "my_lib.h"

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

