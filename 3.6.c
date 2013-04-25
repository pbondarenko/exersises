#include "my_lib.h"

int main() {
	int x, len;
	scanf("%d%d", &x, &len);
	char* s;
	s = itoa_window(x, len);
	printf("%s\n", s);
	free(s);
	return 0;
}
