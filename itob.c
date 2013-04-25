#include "my_lib.h"
char * itob (int x, int b) {
        int sign = (x < 0) ? (-1) : (1);
        int szres = 0;
        char * result = (char*)malloc(sizeof(int)*8+2);
        do {
                int d = ((x >= 0) ? (x % b) : (-(x % b)));
                if (d < 10) {
                        result[szres++] = d + '0';
                } else {
                        result[szres++] = d - 10 + 'a';
                }
                x /= b;
        } while (x != 0);
        if (sign < 0) {
                result[szres++] = '-';
        }
        result[szres] = '\0';
        result = (char*) realloc(result, szres + 1);
        int i;
        for (i = 0; i < szres / 2; ++i) {
                swap(&result[i], &result[szres - i - 1]);
        }
        return result;
}

