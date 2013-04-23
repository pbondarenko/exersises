
CFLAGS:= -O0 -g3

-include *.dep

%.o: %.c
	$(CC) -c $< -MMD -MF $*.dep -MT '$*.o $*.dep' -MP -o $*.o  

my_lib.a: get_input.o get_line.o reverse.o all_spaces_to_one.o detab.o entab.o print_n_symb_in_line.o \
          good_c.o delete_comments.o delete_escape.o delete_string.o delete_char.o delete_brackets.o
	$(AR) crv $@ $^

1.2: 1.2.o

1.3: 1.3.o

1.4: 1.4.o

1.5: 1.5.o

1.6: 1.6.o

1.7: 1.7.o

1.8: 1.8.o

1.9: 1.9.o

1.10: 1.10.o

1.11: 1.11.o

1.12: 1.12.o

1.13: 1.13.o

1.14: 1.14.o

1.15: 1.15.o

1.16: 1.16.o my_lib.a

1.17: 1.17.o my_lib.a

1.18: 1.18.o my_lib.a

1.19: 1.19.o my_lib.a

1.19_ut: 1.19_ut.o my_lib.a /usr/lib/libcheck.a

1.20: 1.20.o my_lib.a

1.21: 1.21.o my_lib.a

1.22: 1.22.o my_lib.a

1.23: 1.23.o my_lib.a

1.24: 1.24.o my_lib.a
1.24_ut: 1.24_ut.o my_lib.a /usr/lib/libcheck.a
clean:
	rm -rf *.o *.a 1.19 1.19_ut 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 1.10 1.11 1.12 1.13 1.14 1.15 1.16 1.17 1.18 1.19 1.20 1.21 1.22 1.23 1.24 1.24_ut
all: 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 1.10 1.11 1.12 1.13 1.14 1.15 1.16 1.17 1.18 1.19 1.19_ut 1.20 1.21 1.22 1.23 1.24 1.24_ut my_lib.a

.PHONY: clean
