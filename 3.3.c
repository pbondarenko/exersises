#include "my_lib.h"

int main() {
	char* s1;
	char* s2;
	s1 = get_line();
	s2 = expand(s1);
	printf("%s\n", s2);
	free(s1);
	free(s2);
	return 0;
}
