all:sort Linkstack queue1 queue2 hos search hafu Bintree
sort:sort.c testsort.c
	gcc sort.c testsort.c -o sort

clean:
	rm sort


Linkstack:Linkstack.c teststack.c
	g++ Linkstack.c teststack.c -o Linkstack
clean:
	rm Linkstack

queue1:queue1.c testqueue1.c
	gcc queue1.c testqueue1.c -o queue1
clean:
	rm queue1

queue2:queue2.c testqueue2.c
	gcc queue2.c testqueue2.c -o queue2

clean:
	rm queue2

hos:hos.c hosmain.c
	g++ hos.c hosmain.c -o hos
clean:
	rm hos

search:search.c testsearch.c
	g++ search.c testsearch.c -o search
clean:
	rm search

hafu:hafu.c testhafu.c
	g++ hafu.c testhafu.c -o hafu
clean:
	rm hafu

Bintree:Bintree.c testBintree.c
	g++ Bintree.c testBintree.c -o Bintree
clean:
	rm Bintree
