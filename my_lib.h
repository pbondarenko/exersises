#ifndef MY_LIB
#define MY_LIB

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <ctype.h>

typedef enum {
	OK,
	ERROR_COMMENTS,
	ERROR_ESCAPE,
	ERROR_CHAR,
	ERROR_STRING,
	ERROR_BRACKET
} good_c_answer;

char * get_input();
char * get_line();
char * all_spaces_to_one(char *);
char * delete_brackets(char *);
char * delete_char(char *);
char * delete_string(char *);
char * delete_comments(char *);
char * delete_escape(char *);
char * detab(char *);
char * entab(char *);
int getch(void);
void ungetch(int);
int getop(char *);
good_c_answer good_c(char *);
void push(double);
double pop(void);
char * print_n_symb_in_line(char *, int);
char * reverse(char *);
int htol(char*);
void squeeze(char *, char *);
int any(char*, char*);
#endif /*MY_LIB*/
