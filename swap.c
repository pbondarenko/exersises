#include "my_lib.h"
void swap(char * a, char * b) {
	char c = *a;
	*a = *b;
	*b = c;
}
