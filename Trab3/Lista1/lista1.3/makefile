all: lista1.3

lista1.3: util.o lista1.3.o
	gcc util.o lista1.3.o -o lista1.3

lista1.3.o: lista1.3.c
	gcc -c lista1.3.c

util.o: ../Functions/util.h
	gcc -c ../Functions/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.3


