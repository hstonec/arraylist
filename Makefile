CC=cc

test: main.c arraylist.o
	$(CC) -Wall -o test main.c arraylist.o

arraylist.o: arraylist.c arraylist.h
	$(CC) -Wall -c arraylist.c
	
.PHONY: clean
clean:
	-rm test arraylist.o