#ifndef Linkstack_H_
#define Linkstack_H_
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdbool.h> 
#include <stdlib.h>

typedef int dateType;
typedef struct node {
	dateType date;
	struct node *next;
} LinkStack;
LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s, dateType x);
void Pop(LinkStack *s);
dateType GetTop(LinkStack *s);

int priority(char x);
double compute(double x, double y, char op);

#endif
