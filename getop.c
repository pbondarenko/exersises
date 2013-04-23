#include "my_lib.h"
#define NUMBER '0'

int getch(void);
void ungetch(int);
/* getop: получает следующий оператор или операнд */
int getop(char * s)
{
    free(s);
    int i, c;
    int cap = 2;
    s = (char *)malloc(cap);
    while ((s[0] = c = getch()) == ' ' || c == '\t' )
        ;
    if (c == '\n')
    	return c;
    s[1] = '\0';
    char c2 = getch();
    i = 0;
    if(isdigit(c2) && c == '-') {
    	c = c2;
    	ungetch(c);

    } else {
    	if (!isdigit(c) && c != '.')
    		return c; /* не число */
    }

    if (isdigit(c)){ /* накапливаем целую часть */
	   if(i >= cap - 2)
                {
                        cap *= 2;
                        s = (char*) realloc(s, cap);
                }
	
        while (isdigit(s[++i] = c = getch())) {
		if(i >= cap - 2)
		{
			cap *= 2;
			s = (char*) realloc(s, cap);
		}
			
	}
    }    
    if (c == '.'){ 
	/* накапливаем дробную часть */
	   if(i >= cap - 2)
                {
                        cap *= 2;
                        s = (char*) realloc(s, cap);
                }

        while (isdigit(s[++i] = c = getch())){
		   if(i >= cap - 2)
                {
                        cap *= 2;
                        s = (char*) realloc(s, cap);
                }

	}
    }
    s = (char*)realloc(s, i+1);
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}
