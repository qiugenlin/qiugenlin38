all:sort Linkstack
sort:sort.c testsort.c
	gcc sort.c testsort.c -o sort

clean:
	rm sort


Linkstack:Linkstack.c teststack.c
	g++ Linkstack.c teststack.c -o Linkstack
clean:
	rm Linkstack
