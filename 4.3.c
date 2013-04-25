#include "my_lib.h"
/* калькулятор с обратной польской записью */
int main ()
{
    int type;
    double op2, op3;
    char* s = (char*)malloc(1);
   struct stack * st = stack_init();
   while ((type = getop (s)) != '\n') {
        switch (type) {
        case NUMBER:
          stack_push (st, atofloat (s));
          break;
      case '+':
          stack_push (st, stack_pop(st) + stack_pop(st));
          break;
      case '*':
          stack_push (st, stack_pop(st) * stack_pop(st));
          break;
      case '-':
          op2 = stack_pop(st);
          stack_push (st, stack_pop(st) - op2);
          break;
      case '/' :
          op2 = stack_pop(st);
          if (op2 != 0.0)
              stack_push (st, stack_pop(st) / op2);
          else
              printf("ошибка: деление на нуль\n");
          break;
      case '%' :
    	  op2 = stack_pop(st);
    	  op3 = stack_pop(st);
    	  if (op2 != 0.0) {
    		  stack_push (st, op3 - op2 * (int)(op3 / op2 + 0.5));
    	  } else
    		  printf("ошибка: деление на нуль\n");
    	  break;
      case '\n' :
          printf("\t%.8g\n", stack_pop(st));
          break;
      default:
          printf("ошибка: неизвестная операция %s\n", s);
          break;
      }
  }
  if(st->top != 1)
	printf("Incorrect input\n");
   else {
	printf("%f\n", st->val[0]);	
   }
  stack_free(st);
  free(s);
  return 0;
}
