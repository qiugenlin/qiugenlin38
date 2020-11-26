all:sort
sort:sort.c testsort.c
	gcc sort.c testsort.c -o sort

clean:
	rm sort
