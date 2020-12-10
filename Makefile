all:sort Linkstack queue1 queue2
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
