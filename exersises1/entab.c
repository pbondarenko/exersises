#include "my_lib.h"

#define TAB 7
char * entab (char * line) {
        int i, j;
        int cnt_space = 0;
        int len = strlen(line);
        int sz_result = 0;
        char * result = (char * ) malloc(len + 1);
        for (i = 0; i < len; ++i) {
                if (line[i] == '\t') {
                        cnt_space += TAB;
                } else {
                        if (line[i] == ' ') {
                                cnt_space += 1;
                        } else {
                                for (j = 0; j < cnt_space / TAB; ++j) {
                                        result[sz_result++] = '\t';
                                }
                                for (j = 0; j < cnt_space % TAB; ++j) {
                                        result[sz_result++] = ' ';
                                }
                                cnt_space = 0;
                                result[sz_result++] = line[i];
                        }


                }
        }
        for (j = 0; j < cnt_space / TAB; ++j) {
                result[sz_result++] = '\t';
        }
        for (j = 0; j < cnt_space % TAB; ++j) {
                result[sz_result++] = ' ';
        }
        result[sz_result] = '\0';
        result = (char *) realloc(result, sz_result + 1);
        return result;
}

