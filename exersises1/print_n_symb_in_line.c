#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * print_n_symb_in_line(char * line, int n) {
        int i;
        int len = strlen(line);
        int * have_space = (int *) malloc(len * sizeof(int));
        for (i = 0; i < len; ++i) {
                if (line[i] == ' ' || line[i] == '\t') {
                        have_space[i] = i;
                } else {
                        have_space[i] = (i > 0) ? have_space[i - 1] : -1;
                }
        }
        char * result = (char * ) malloc(len * 3 + 1);
        int sz_result = 0;
        for (i = 0; i < len; ++i) {
                if(i + n >= len) {
                        result[sz_result++] = line[i];
                } else {
                        int last;
			int j = i;
                        if(have_space[i + n] < i) {
                                last = i + n;
				i = i + n-1;
                        } else {
                                last = have_space[i+n];
                        	i = have_space[i+n];
			}
                       
                        for (; j < last; ++j)
                                result[sz_result++] = line[j];
                        result[sz_result++] = '\n';
                }
        }
        result = (char*)realloc(result, sz_result + 1);
        result[sz_result] = '\0';
        return result;
}
     
