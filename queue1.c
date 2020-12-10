#include"queue1.h"
	
//初始化链队列 
void initQueue(LinkQueue *q) {
	q->front = (struct node*)malloc(sizeof(struct node));
	q->rear = q->front;
} 

//判断队列是否为空 
int Empty(LinkQueue *q) {
	return q->front == q->rear;
} 

//元素x进队列 
void push(LinkQueue *q,dataType x) {
	struct node *t =(struct node*)malloc(sizeof(struct node));
	t->data = x;
	t->next = NULL;
	q->rear->next = t;
	q->rear = t;
}

//出队列 
void pop(LinkQueue *q) {
	if (Empty(q)) exit(1);
	struct node *p = q->front->next;
	q->front->next = p->next;
	free(p);
} 

//取队头元素的值 
dataType front(LinkQueue *q) {
	return q->front->next->data;
} 

//取队尾元素的值 
dataType back(LinkQueue *q) {
	return q->rear->data;
} 

//求队列元素个数 
int size(LinkQueue* q) {
	struct node *p = q->front->next;
	int k = 0;
	while (p) {
		k++;
		p = p->next;
	}
	return k;
}
