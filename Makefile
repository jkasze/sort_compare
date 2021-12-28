test :  sort_compare.o swap.o test.o
	gcc -o build/test build/test.o build/sort_compare.o build/swap.o

sort_compare.o : sort_compare.c sort_compare.h
	gcc -o build/sort_compare.o -c sort_compare.c

test.o : test.c sort_compare.h
	gcc -o build/test.o -c test.c 

swap.o : utils/swap.c
	gcc -o build/swap.o -c utils/swap.c

clean : 
	rm build/test.exe build/test.o build/sort_compare.o build/swap.o
