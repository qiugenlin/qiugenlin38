#ifndef queue1_h
#define queue1_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef int dataType;
struct node {
	dataType data;
	struct node *next;
	};
	typedef struct {
		struct node *front, *rear;
	} LinkQueue;
void initQueue(LinkQueue *q);
int Empty(LinkQueue *q);
void push(LinkQueue *q,dataType x);
void pop(LinkQueue *q);
dataType front(LinkQueue *q);
dataType back(LinkQueue *q);
int size(LinkQueue* q);

#endif
