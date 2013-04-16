
CFLAGS:= -O0 -g3

my_lib.a: get_line.o reverse.o
	$(AR) crv $@ $^

1.19: 1.19.o my_lib.a

1.19_ut: 1.19_ut.o my_lib.a /usr/lib/libcheck.a

clean:
	rm -rf *.o *.a 1.19 1.19_ut

.PHONY: clean
