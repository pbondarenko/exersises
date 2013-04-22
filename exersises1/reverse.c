#include "my_lib.h"
char * reverse (char * line) {
	char * result;
	int i;
	int len = strlen(line);
	memcpy(result, line, len);
	for (i = 0; i < len / 2; ++i) {
		char c = result[i];
		result[i] = result[len - i - 1];
		result[len - i - 1] = c;
	}
	return result;
}
