#include "my_lib.h"
int main() {
	char* s;
	char* t;
	t = get_line();
	s = escape(t);
	printf("%s\n", s);
	free(s);
	free(t);
	return 0;
}
