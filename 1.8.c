#include <stdio.h>

int main () {
	int nl, nt, ns;
	int c;
	for (nl = nt = ns = 0; (c = getchar()) != EOF;) {
		switch(c) {
			case '\n':++nl; break;
		
			case '\t':++nt; break;
			case ' ':++ns; break;
		
		}
	}
	printf("%d %d %d\n", ns, nt, nl);
	return 0;
}
