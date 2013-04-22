#include "my_lib.h"
#define MAXVAL 100 /* максимальная глубина стека */
int sp = 0; /* следующая свободная позиция в стеке */
double val[ MAXVAL ]; /* стек */
/* push: положить значение f в стек */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf( "ошибка: стек полон, %g не помещается\п", f);
}
/* pop: взять с вершины стека и выдать в качестве результата */
double pop(void)
{
  if (sp > 0)
      return val[--sp];
  else {
      printf( "ошибка: стек пуст\п");
      return 0.0;
  }
}
