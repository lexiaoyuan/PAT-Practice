/**
 *
 * @author 徐仕成
 * 6-6 求单链表结点的阶乘和
 * 本题要求实现一个函数，求单链表L结点的阶乘和。这里默认所有结点的值非负，且题目保证结果在int范围内。
 * 函数接口定义：
 * int FactorialSum( List L );
 * 其中单链表List的定义如下：
 * typedef struct Node *PtrToNode;
 * struct Node {
 *	  int Data; /* 存储结点数据
 *	  PtrToNode Next; /* 指向下一个结点的指针
 * };
 * typedef PtrToNode List; /* 定义单链表类型
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/738
 *
 */
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node* PtrToNode;
struct Node 
	int Data; // 存储结点数据 
	PtrToNode Next; // 指向下一个结点的指针 
};
typedef PtrToNode List; // 定义单链表类型 

int FactorialSum(List L);

int main()
{
	int N, i;
	List L, p;

	scanf_s("%d", &N);
	L = NULL;
	for (i = 0; i < N; i++) {
		p = (List)malloc(sizeof(struct Node));
		if (p) {
			scanf_s("%d", &p->Data);
			p->Next = L;  
			L = p;
		}
	}
	printf("%d\n", FactorialSum(L));

	return 0;
}

int FactorialSum(List L)
{
	int sum =0, product;
	while(L) {
		product = 1; //乘积
		for (int i = 2; i <= L->Data; i++)
		{
			product = product * i;
		}
		sum = sum + product;
		L = L->Next;
	}
	return sum;
}
*/
#include<iostream>
using namespace std;

typedef struct Node {
	int Data;
	struct Node* Next;
}Node, * List;

int FactorialSum(List L);
int main() {
	int n;
	cin >> n;
	List L=NULL, p;
	while (n--) {
		p = (Node*)malloc(sizeof(Node));
		if (p) {
			cin >> p->Data;
			p->Next = L;
			L = p;
		}
	}
	cout << FactorialSum(L);
	return 0;
}

int FactorialSum(List L)
{
	int sum = 0, product;
	while (L) {
		product = 1; //乘积
		for (int i = 2; i <= L->Data; i++)
		{
			product = product * i;
		}
		sum = sum + product;
		L = L->Next;
	}
	return sum;
}
