#include"queue1.h"
int main() {
	LinkQueue queue, *q=&queue;
	initQueue(q);
	push(q,80);
	push(q,90);
	pop(q);
	push(q,70);
	printf("队列的元素个数为:%d\n",size(q));
	printf("队头元素为；%d\n",front(q));
	printf("队尾元素为；%d\n",back(q));
}
