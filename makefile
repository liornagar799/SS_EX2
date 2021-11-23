.PHONY:clean all
	
all: connections

connections: main.o my_mat.o
	gcc -Wall -g -o connections main.o my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

#make clean
clean:
	rm -f *.o connections


 
