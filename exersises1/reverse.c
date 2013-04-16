#include <string.h>
void reverse (char * line) {
	int i;
	int len = strlen(line);
	for (i = 0; i < len / 2; ++i) {
		char c = line[i];
		line[i] = line[len - i - 1];
		line[len - i - 1] = c;
	}
}
