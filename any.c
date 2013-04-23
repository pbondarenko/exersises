#include "my_lib.h"
int any(char* s1, char* s2) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        int i = 0, j;
        for (i = 0; i < len1; ++i) {
                j = 0;

                for(j = 0; j < len2; ++j) {
                        if (s1[i] == s2[j]) {
                                return i;
                        }
                }


        }
        return -1;
}

