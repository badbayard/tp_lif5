all: monprog.out

monprog.out : main.o Liste.o ElementL.o
	gcc main.o Liste.o ElementL.o -o monprog.out

main.o : main.c Liste.h ElementL.h
	gcc -c -g -Wall -ansi -pedantic main.c

Liste.o : Liste.c Liste.h ElementL.h
	gcc -c -g -Wall -ansi -pedantic Liste.c

ElementL.o : ElementL.c ElementL.h
	gcc -c -g -Wall -ansi -pedantic ElementL.c

clean:
	rm *.o *~
