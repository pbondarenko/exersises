#include "my_lib.h"

#define TAB 7

char * detab (char * line) {
        int i, j;
        int len = strlen(line);
        char * result = (char *) malloc(TAB * len + 1);
        int sz_result = 0;
        for (i = 0; i < len; ++i) {
                if (line[i] == '\t') {
                        for (j = 0; j < TAB; ++j) {
                                result[sz_result++] = ' ';
                        }
                } else {
                        result[sz_result++] = line[i];
                }
        }
        result[sz_result] = '\0';
        result =  (char * ) realloc(result, sz_result + 1);
        return result;
}
