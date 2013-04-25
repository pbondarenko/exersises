#include "my_lib.h"

int main() {
	int x, b;
	scanf("%d%d", &x, &b);
	char * s;
	s = itob(x, b);
	printf("%s\n", s);
	free(s);
	return 0;
}
