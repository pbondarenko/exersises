#include <stdio.h>
#define NMAX 1000
extern void get_line(char[]);
extern int stdindex(char[], char[]);
int main() {
	char s1[NMAX];
	char s2[NMAX];
	get_line(s1);
	get_line(s2);
	printf("%d\n", strindex(s1, s2));

	return 0;
}
