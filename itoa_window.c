#include "my_lib.h"
char * itoa_window (int x, int len) {
        char * result = itoa(x);
	int i;
        int szres = strlen(result);
	for (i = 0; i < szres / 2; ++i) {
                swap(&result[i], &result[szres - i - 1]);
        }
	if(szres < len){
		result = (char *) realloc(result, len+1);
	}
	while(szres < len){
		result[szres++] = ' ';
	}
	result[szres] = '\0';
        for (i = 0; i < szres / 2; ++i) {
                swap(&result[i], &result[szres - i - 1]);
        }

        return result;
}

