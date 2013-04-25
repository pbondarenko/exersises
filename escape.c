#include "my_lib.h"
char * escape(char * t) {
        int len = strlen(t);
        int szs = 0;
        int i;
        char * result = (char*) malloc(len * 2 + 1);
        for (i = 0; i < len; ++i) {
                switch(t[i]) {
                case '\t':
                        result[szs++] = '\\';
                        result[szs++] = 't';
                        continue;
                case '\n':
                        result[szs++] = '\\';
                        result[szs++] = 'n';
                        continue;
                default:
                        result[szs++] = t[i];
                }
        }
        result[szs] = '\0';
        result = (char *)realloc(result, szs+1);
        return result;
}

