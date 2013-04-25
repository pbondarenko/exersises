#include "my_lib.h"
int main() {
	char * s1 = get_line();
	char * s2 = get_line();
	int idx = strindex(s1, s2);
	printf("%d\n", idx);
	free(s1);
	free(s2);
	return 0;
}
