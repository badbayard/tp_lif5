all: monprog.out

monprog.out: main.o TableauDynamique.o ElementTD.o
	gcc main.o TableauDynamique.o ElementTD.o -o monprog.out

main.o: main.c TableauDynamique.h ElementTD.h
	gcc -c -g -Wall -ansi -pedantic main.c

TableauDynamique.o:TableauDynamique.c TableauDynamique.h ElementTD.h
	gcc -c -g -Wall -ansi -pedantic TableauDynamique.c

ElementTD.o:ElementTD.c ElementTD.h
	gcc -c -g -Wall -ansi -pedantic ElementTD.c

clean:
	rm *.o *~

