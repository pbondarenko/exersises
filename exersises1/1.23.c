#include <stdio.h>
#include <string.h>
#define TAB 7

extern char * get_line ();

int in_comm = 0;
int in_comm_ = 0;
int in_string = 0;
int in_symb = 0;

int main () {


	int len;
	int n;
	char * line;
	for (; ;) {
		line = get_line();
		in_comm = 0;
		do_(line);
		free(line);
	}

	return 0;
}
void do_(char * line) {
	int i;
	int len = strlen(line);
	for (i = 0; i < len; ++i) {

		if(in_comm_) {
			if (line[i] == '/' && i > 0 && line[i-1] == '*') {
				in_comm_ = 0;
			}
			continue;
		}
		if (in_string) {
			if (line[i] == '\\') {
				putchar(line[i]);

				putchar(line[i+1]);
				++i;
				continue;
			}
			if (line[i] == '\"') {
				putchar(line[i]);
				in_string = 0;
				continue;
			}
			putchar(line[i]);
			continue;
		}
		if (in_symb) {
			if (line[i] == '\\') {
				putchar(line[i]);

				putchar(line[i+1]);
				++i;
				continue;
			}
			if (line[i] == '\'') {
				putchar(line[i]);
				in_symb = 0;
				continue;
			}
			putchar(line[i]);
			continue;
		}

		if (line[i] == '\"') {
			in_string = 1;
			putchar(line[i]);
			continue;
		}
		if(line[i] == '\'') {
			in_symb = 1;
			putchar(line[i]);
			continue;
		}
		if (line[i] == '/' && i < len - 1 && line[i + 1] == '/') {
			in_comm = 1;
			break;
		}
		if (line[i] == '/' && i < len - 1 && line[i + 1] == '*') {
			in_comm_ = 1;
			i++;
			continue;
		}
		putchar(line[i]);
	}
	putchar('\n');
}
