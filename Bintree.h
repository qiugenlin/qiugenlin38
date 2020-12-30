#ifndef _Bintree_
#define _Bintree_
#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

typedef char dataType;
struct TreeNode {
	dataType data;
	TreeNode *left,*right;
};

void CreateTree(TreeNode *&t, dataType x);
void PreOrder(TreeNode *t);
void InOrder(TreeNode *t);
void PostOrder(TreeNode *t);
void LevelOrder(TreeNode *t);

#endif
