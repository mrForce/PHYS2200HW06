all: build

build: caesar.o 
	gcc caesar.o -o caesar

caesar.o:
	gcc -c caesar.c
clean: 
	rm *.o caesar
