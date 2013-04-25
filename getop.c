#include "my_lib.h"

/* getop: получает следующий оператор или операнд */
int getop(char * s)
{
    free(s);
    int i, c;
    int cap = 1;
    s = (char *)malloc(cap+1);
    while ((s[0] = c = getch()) == ' ' || c == '\t' )
        ;
    if (c == '\n')
    	return c;
    s[1] = '\0';

    if(isdigit(c)) {
    	i = 1;
    while(1) {
	c = getch();
	if(isdigit(c) || c == '.') {
		if(i >= cap) {
			cap *= 2;
			s = (char*)realloc(s, cap+1);
			
		}
		s[i++] = c;
	}else{
		ungetch(c);
		break;
	}
     }
	s[i] = '\0';
	s = (char*)realloc(s, i+1);
	return NUMBER;		
    
    } else {
   	return c;
    }
    
}
