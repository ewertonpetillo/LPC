all: lista1.5

lista1.5: lista1.5.o util.o
	gcc lista1.5.o util.o -o lista1.5

lista1.5.o: lista1.5.c
	gcc -c lista1.5.c

util.o: ../Functions/util.c
	gcc -c ../Functions/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.5

