all: lista1.4

lista1.4: lista1.4.o util.o
	gcc lista1.4.o util.o -o lista1.4

lista1.4.o: lista1.4.c
	gcc -c lista1.4.c

util.o: ../Functions/util.c
	gcc -c ../Functions/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.4
