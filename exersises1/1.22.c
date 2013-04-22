#include "my_lib.h"

int main () {

	int n;
	scanf("%d", &n);
	getchar();
	char * line;
	for (; ;) {
		line = get_line();
		if(!line)
			break;
		char * to_print = print_n_symb_in_line(line, n);
		printf("%s\n", to_print);
		free(to_print);
		free(line);
	}

	return 0;
}
