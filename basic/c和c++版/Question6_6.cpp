/**
 *
 * @author ���˳�
 * 6-6 ��������Ľ׳˺�
 * ����Ҫ��ʵ��һ��������������L���Ľ׳˺͡�����Ĭ�����н���ֵ�Ǹ�������Ŀ��֤�����int��Χ�ڡ�
 * �����ӿڶ��壺
 * int FactorialSum( List L );
 * ���е�����List�Ķ������£�
 * typedef struct Node *PtrToNode;
 * struct Node {
 *	  int Data; /* �洢�������
 *	  PtrToNode Next; /* ָ����һ������ָ��
 * };
 * typedef PtrToNode List; /* ���嵥��������
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/738
 *
 */
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node* PtrToNode;
struct Node 
	int Data; // �洢������� 
	PtrToNode Next; // ָ����һ������ָ�� 
};
typedef PtrToNode List; // ���嵥�������� 

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
		product = 1; //�˻�
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
		product = 1; //�˻�
		for (int i = 2; i <= L->Data; i++)
		{
			product = product * i;
		}
		sum = sum + product;
		L = L->Next;
	}
	return sum;
}
