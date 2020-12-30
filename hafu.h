#ifndef HAFU_H_
#define HAFU_H_
#include<iostream>
#include<cstdio>
using namespace std;

#define MaxSize 20

typedef struct {
	char data;			//节点值
	double  weight;		//权重
	int parent;			//双亲节点
	int lchild;			//左孩子节点
	int rchild;			//右孩子节点
}HTNode;

void CreateHT(HTNode ht[],int n);
#endif
