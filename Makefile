CC=gcc
FLAGS= -c
.PHONY: clean all
#target commands
all: isort.o txtfind.o main_numbers.o main_string.o do_string.exe do_sort.exe

isort.o: isort.c myEX.h
	$(CC) $(FLAGS) isort.c -o isort.o

txtfind.o: txtfind.c myEX.h
	$(CC) $(FLAGS) txtfind.c -o txtfind.o

main_numbers.o: main_numbers.c 
	$(CC) $(FLAGS) main_numbers.c -o main_numbers.o

main_string.o: main_string.c 
	$(CC) $(FLAGS) main_string.c -o main_string.o

do_sort.exe: isort.o main_numbers.o
	$(CC) main_numbers.o isort.o -o isort

do_string.exe:main_string.o txtfind.o
	$(CC) main_string.o txtfind.o -o txtfind

isort:isort
	./isort


txtfind: txtfind
	./txtfind

clean:
	@rm *.o txtfind isort