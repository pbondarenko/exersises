#include "my_lib.h"

int main() {
	int x;
	scanf("%d", &x);
	char* s;
	s = itoa(x);
	printf("%s\n", s);
	free(s);
	return 0;
}
