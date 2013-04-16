#include <stdio.h>
char * get_line() {
	char * a;
	int len = 0;
	int i = 0;
	char c;
	a = malloc(1);
	len = 1;

	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if(i >= len - 1) {
			len *= 2;
			a = (char *) realloc(a, len);
		}
		a[i] = c;
	}
	
	if(c == EOF) {
		free(a);
		return NULL;
	}
	a[i] = '\0';
	return a;
}
