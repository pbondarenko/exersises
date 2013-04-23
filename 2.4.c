#include "my_lib.h"

int main() {
	char * s1;
	char * s2;
	s1 = get_line();
	s2 = get_line();
	squeeze(s1, s2);
	printf("%s\n", s1);
	free(s1);
	free(s2);
	return 0;
}
