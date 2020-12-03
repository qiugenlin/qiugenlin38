#include"Linkstack.h"

//初始化链表
LinkStack* InitStack()  {
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
	return t;
} 

//判断栈是否为空
int Empty(LinkStack *s)  {
	return s->next == NULL;
} 

//元素x进栈
void Push(LinkStack *s, dateType x)  {
	node *t = (node*)malloc(sizeof(node));
	t->date = x;
	t->next = s->next;
	s->next = t;
} 

//出栈
void Pop(LinkStack *s)  {
	if (Empty(s)) exit(1);
	node *p = s->next;
	s->next = p->next;
	free(p); 
} 

//取栈顶元素的值
dateType GetTop(LinkStack *s) {
	return s->next->date;
}

int priority(char x)  {
	switch (x) {
		case '+':
		case '-':
		case '=': return 1;
		case '*':
		case '/': return 2;
		case '(': return 3;
	}
} 
double compute(double x, double y, char op) {
	switch(op) {
		case '+': return x + y;
		case '-': return x - y;
		case '*': return x * y;
		case '/': return x / y;
	}
}
