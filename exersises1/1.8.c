#include <stdio.h>

int main () {
	int nl, nt, ns;
	int c;
	for (nl = nt = ns = 0; (c = getchar()) != EOF;) {
		if (c == '\n') {
			++nl;
		}
		if (c == '\t') {
			++nt;
		}
		if (c == ' ') {
			++ns;
		}
	}
	printf("%d %d %d\n", ns, nt, nl);
	return 0;
}
