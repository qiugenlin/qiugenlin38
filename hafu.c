#include "hafu.h"
void CreateHT(HTNode ht[],int n){
	int i, j, k;
	int lnode, rnode;
	double min1, min2;

	for (i = 0; i < 2 * n - 1; i++)
		ht[i].parent = ht[i].lchild = ht[i].rchild = -1;

	
	for (i = n; i < 2 * n - 1; i++) {
		min1 = min2 = 32767;
		lnode = rnode = -1;

		
		for (k = 0; k <= i - 1; k++) 
		{
			if (ht[k].parent == -1) 
			{//只在尚未构造二叉树的节点中查找

				if (ht[k].weight < min1) 
				{//当k点权值小于保存最小权值的点的值时
					min2 = min1;
					rnode = lnode;//将最小权值点赋值给次小权值点
					min1 = ht[k].weight;
					lnode = k;//将k点赋值为最小权值点
				}
				else if (ht[k].weight < min2) 
				{//当k点权值大于min1,小于min2时
					min2 = ht[k].weight;
					rnode = k;
				}
			}
			
		}
		//用两个最小节点创建新节点，该新节点将在下一次循环参与比较
		ht[i].weight = ht[lnode].weight + ht[rnode].weight;//为新节点设置权值
		ht[i].lchild = lnode;//设置其左右孩子节点
		ht[i].rchild = rnode;
		ht[lnode].parent = i;//设置当前两最小节点的双亲节点
		ht[rnode].parent = i;

	}

}

