all: lista1.9

lista1.9: lista1.9.o util.o
	gcc lista1.9.o util.o -o lista1.9

lista1.9.o: lista1.9.c
	gcc -c lista1.9.c

util.o: ../Functions/util.c
	gcc -c ../Functions/util.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista1.9

