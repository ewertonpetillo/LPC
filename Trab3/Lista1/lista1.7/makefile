all: lista1.7

lista1.7: util.o lista1.7.o
	gcc lista1.7.o util.o -o lista1.7

lista1.7.o: lista1.7.c
	gcc -c lista1.7.c

util.o: ../Functions/util.c
	gcc -c ../Functions/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.7



