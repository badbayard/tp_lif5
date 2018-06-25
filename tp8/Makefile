all: monprog.out

monprog.out : main.o Arbre.o ElementA.o ElementTD.o ElementL.o Liste.o File.o
	gcc main.o Arbre.o ElementA.o ElementTD.o ElementL.o Liste.o  -o monprog.out

main.o : main.c Arbre.h ElementA.h ElementTD.h ElementL.h Liste.h
	gcc -c -g -Wall -ansi -pedantic main.c

Arbre.o : Arbre.c Arbre.h ElementA.h
	gcc -c -g -Wall -ansi -pedantic Arbre.c

ElementA.o : ElementA.c ElementA.h 
	gcc -c -g -Wall -ansi -pedantic ElementA.c

ElementTD.o : ElementTD.c ElementTD.h
	gcc -c -g -Wall -ansi -pedantic ElementTD.c
	
ElementL.o : ElementL.c ElementL.h
	gcc -c -g -Wall -ansi -pedantic ElementL.c

Liste.o : Liste.c Liste.h ElementL.h
	gcc -c -g -Wall -ansi -pedantic Liste.c
	
File.o : File.c File.h Liste.h Element
	gcc -c -g -Wall -ansi -pedantic File.c  

clean:
	rm *.o *~
