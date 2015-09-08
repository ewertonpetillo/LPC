all: lista1.8

lista1.8: util.o lista1.8.o
	gcc util.o lista1.8.o -o lista1.8

lista1.8.o: lista1.8.c
	gcc -c lista1.8.c

util.o: ../Functions/util.c
	gcc -c ../Functions/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.8

