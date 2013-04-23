#include <stdio.h>
#include <stdlib.h> /* для atof() */
#define MAXOP 100 /* макс. размер операнда или оператора */
#define NUMBER '0' /* признак числа */
int getop (char []);
void push (double);
double pop (void);
/* калькулятор с обратной польской записью */
int main ()
{
    int type;
    double op2, op3;
    char s[MAXOP];
    while ((type = getop (s)) != EOF && type != '\n') {
        switch (type) {
        case NUMBER:
          push (atof (s));
          break;
      case '+':
          push (pop() + pop());
          break;
      case '*':
          push (pop() * pop());
          break;
      case '-':
          op2 = pop();
          push (pop() - op2);
          break;
      case '/' :
          op2 = pop();
          if (op2 != 0.0)
              push (pop() / op2);
          else
              printf("ошибка: деление на нуль\n");
          break;
      case '%' :
    	  op2 = pop();
    	  op3 = pop();
    	  if (op2 != 0.0) {
    		  push (op3 - op2 * (int)(op3 / op2 + 0.5));
    	  } else
    		  printf("ошибка: деление на нуль\n");
    	  break;
      case '\n' :
          printf("\t%.8g\n", pop());
          break;
      default:
          printf("ошибка: неизвестная операция %s\n", s);
          break;
      }
  }
  return 0;
}
