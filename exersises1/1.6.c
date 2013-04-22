#include <stdio.h>
int main() {
	for(;;) {
		int c;
		int res = ((c = getchar()) != EOF);
		printf("%d ", res);
		if(res == 0)
			break;
	}
	return 0;
}
