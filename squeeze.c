#include "my_lib.h"
void squeeze(char * s1, char * s2) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        int i = 0, j;
        int szs1 = 0;
        for (i = 0; i < len1; ++i) {
                j = 0;

                for(j = 0; j < len2; ++j) {
                        if (s1[i] == s2[j]) {
                                goto was;
                        }
                }
                s1[szs1++] = s1[i];
                was:;

        }
        s1[szs1] = '\0';
        s1 = (char *)realloc(s1, szs1 + 1);
}

