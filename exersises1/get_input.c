#include "my_lib.h"
char * get_input() {
	char * a;
	int len = 0;
	int i = 0;
	char c;
	a = malloc(1);
	len = 1;

	for(i = 0; (c = getchar()) != EOF; ++i) {
		if(i >= len - 1) {
			len *= 2;
			a = (char *) realloc(a, len);
		}
		a[i] = c;
		len++;
	}
	
	
	a[i] = '\0';
	a = (char*)realloc(a, i+1);
	return (len == 1)?(NULL):(a);
}
