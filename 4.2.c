#include "my_lib.h"

int main() {
	char *a;
	a = get_line();
	double res = atofloat(a);
	printf("%f\n", res);
	free(a);
	return 0;
}

