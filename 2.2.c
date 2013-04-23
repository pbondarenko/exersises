#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	char * s;
	
	int c;
	int cap = 16;
	s = (char*)malloc(cap);
	for (i = 0;(((c = getchar())!=EOF) ? (c != '\n') : (0)); ++i) {
		if(i >= cap){
			cap *= 2;
			s = (char*)realloc(s, cap);
		}
		s[i] = c;
	}
	s[i] = '\0';
	printf("%s\n", s);
	free(s);
	return 0;
}
