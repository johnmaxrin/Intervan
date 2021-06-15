SRCS := $(wildcard *.c src/*.c includes/*.h)

OBJS := $(SRCS:..c=.o)

all : Intervan

Intervan : $(OBJS)
	gcc -o $@ $^

clean:
	rm -f *.o Intervan
