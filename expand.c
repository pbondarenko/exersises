#include "my_lib.h"
char * expand(char* s1) {
        int len = strlen(s1);
        int i;
        int szres = 0;
        char * result = (char*)malloc(len * 30);
        for (i = 0; i < len; ++i) {
                if(s1[i] == '-' && i > 0 && i < len - 1 && isdigit(s1[i-1]) == isdigit(s1[i+1])
                                && isalpha(s1[i-1]) == isalpha(s1[i+1]) && s1[i - 1] <= s1[i + 1]) {
                        char c;
                        for (c = s1[i-1] + 1; c <= s1[i+1]; c++) {
                                result[szres++] = c;
                        }
                        ++i;
                } else {
                        result[szres++] = s1[i];
                }
        }
        result[szres] = '\0';
        result = (char*)realloc(result, szres + 1);
        return result;
}

