#ifndef search_h_
#define search_h
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#define HASHSIZE 12 
#define NULLKEY 0xffffffff/2


typedef  int DataType;
//typedef struct HashTable; 
 struct HashTable {
	int *elem;
	int count;
};
//二叉查找树节点描述 
typedef int DataType;
typedef struct Node {
	DataType key;
	struct Node *left;
	struct Node *right;
	struct Node *parent;
}Node,*PNode;
int InitHashTable(HashTable &pHashTable);
int Hash(int key);
int InsertHashTable (HashTable &pHashTable, int key);
int SearchHashTable(HashTable& pHashTable, int key, int *addr);
void insert (PNode *root,DataType key);
void create(PNode *root, DataType *keyArray,int length);
PNode search(PNode root,DataType key);
void SelectSort(int a[], int n);
int BinarySearch(int a[], int n, int x);
int BSearch(int a[], int low, int high, int x);
int BinarySearch2(int a[], int n, int x);

#endif
