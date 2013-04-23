#include "my_lib.h"

int  htol (char * line) {
        int len = strlen(line);
        int i;
        
        if(len < 3 || (line[0] != '0' && (tolower(line[1]) != 'x'))) {
                
                return -1;
        }
        int res = 0;
        for(i = 2; i < len; ++i) {
                int add = 0;
                if (isdigit(line[i])) {
                        add = line[i] - '0';
                } else
                        add = tolower(line[i]) -'a' + 10;
                res = res * 16 + add;

        }
        return res;
}

