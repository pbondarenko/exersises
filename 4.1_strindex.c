#include <string.h>
int strindex(char s1[], char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0, j;
	for (i = len1 - 1; i >= 0; --i) {
		j = 0;

		for(j = 0; j < len2; ++j) {
			if (s1[i + j] != s2[j]) {
				goto no;
			}
		}
		return i;
		no:;

	}
	return -1;
}
