#include <stdio.h>

char * line;
int get_line ();
void htol (int);

int main () {


	int len;


	for (; ;) {
		len = get_line();
		htol(len);
		free(line);
	}

	return 0;
}
void htol (int len) {
	int i;
	if(len < 3 || (line[0] != '0' && (tolower(line[1]) != 'x'))) {
		printf("%s\n", line);
		return;
	}
	int res = 0;
	for(i = 2; i < len; ++i) {
		int add = 0;
		if (isdigit(line[i])) {
			add = line[i] - '0';
		} else
			add = tolower(line[i]) -'a' + 10;
		res = res * 16 + add;

	}
	printf("%d\n", res);
}
int get_line () {
	int c;
	int len;
	line = (char *) malloc(1);
	line[0] = '\0';
	for (len = 0;(c = getchar()) != '\n' && c != EOF;) {
		len++;
		line = (char *) realloc(line, len);
		line[len-1] = c;
	}
	line = (char*) realloc(line, len + 1);
	line[len] = '\0';
	return len;
}
