objects = build/test.o build/sort_compare.o build/utils.o build/heap.o
test : test.o sort_compare.o utils.o heap.o
	gcc -o build/test $(objects)
	rm build/test.o build/sort_compare.o build/utils.o build/heap.o

sort_compare.o : sort_compare.c sort_compare.h
	gcc -o build/sort_compare.o -c sort_compare.c

test.o : test.c
	gcc -o build/test.o -c test.c 

utils.o : utils/utils.c
	gcc -o build/utils.o -c utils/utils.c 
heap.o : utils/heap.c
	gcc -o build/heap.o -c utils/heap.c

clean : 
	rm build/test
