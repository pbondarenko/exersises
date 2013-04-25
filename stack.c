#include "my_lib.h"

struct stack * stack_init () {
	struct stack * st;
	st = (struct stack*)malloc(sizeof(struct stack));
	st->top = 0;
	st->capacity = 100;
	st->val = (double*)malloc(st->capacity*sizeof(double));
	return st;
}
void stack_free(struct stack* st){
	free(st->val);
	free(st);
}
/* push: положить значение f в стек */
void stack_push(struct stack * st, double f)
{
    if (st->top < st->capacity)
        st->val[(st->top)++] = f;
    else {
    	(st->capacity) *= 2;
	st->val = (double*)realloc((st->val), (st->capacity) * sizeof(double));
	stack_push(st, f);    
    }
}
/* pop: взять с вершины стека и выдать в качестве результата */
double stack_pop(struct stack * st)
{
  if ((st->top) > 0)
      return (st->val)[(--st->top)];
  else {
      printf( "ошибка: стек пуст\n");
      return 0.0;
  }
}
