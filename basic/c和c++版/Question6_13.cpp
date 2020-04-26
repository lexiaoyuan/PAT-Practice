/**
 *
 * @author ���˳�
 * 6-13 �۰����
 * ��һ���ϸ�������У�����int Search_Bin(SSTable T, KeyType k)�������ֵز���k�������е�λ�á�
 * �����ӿڶ��壺
 * int  Search_Bin(SSTable T, KeyType k)
 * ����T�������k�ǲ��ҵ�ֵ��
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/44932
 *
 */
#include<stdio.h>

#define MAXSIZE 50
typedef int KeyType;

typedef  struct
{
	KeyType  key;
} ElemType;

typedef  struct
{
	ElemType* R;
	int  length;
} SSTable;

void  Create(SSTable& T)
{
	int i;
	T.R = new ElemType[MAXSIZE + 1];
	scanf_s("%d",&T.length);
	for (i = 1; i <= T.length; i++)
		scanf_s("%d",&T.R[i].key);
}

int  Search_Bin(SSTable T, KeyType k);

int main()
{
	SSTable T;  KeyType k;
	Create(T);
	scanf_s("%d",&k);
	int pos = Search_Bin(T, k);
	if (pos == 0) printf("NOT FOUND\n");
	else printf("%d\n", pos);
	return 0;
}

int  Search_Bin(SSTable T, KeyType k) {

	int low = 1;
	int high = T.length;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (T.R[mid].key == k)
			return mid;
		else if (T.R[mid].key > k)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}
/*
#include<iostream>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef  struct
{
	KeyType  key;
} ElemType;

typedef  struct
{
	ElemType* R;
	int  length;
} SSTable;

void  Create(SSTable& T)
{
	int i;
	T.R = new ElemType[MAXSIZE + 1];
	cin >> T.length;
	for (i = 1; i <= T.length; i++)
		cin >> T.R[i].key;
}

int  Search_Bin(SSTable T, KeyType k);

int main()
{
	SSTable T;  KeyType k;
	Create(T);
	cin >> k;
	int pos = Search_Bin(T, k);
	if (pos == 0) cout << "NOT FOUND" << endl;
	else cout << pos << endl;
	return 0;
}

int  Search_Bin(SSTable T, KeyType k) {
	
	int low = 1;
	int high = T.length;
	int mid;
	while (low<=high) {
		mid = (low + high) / 2;
		if (T.R[mid].key == k)
			return mid;
		else if (T.R[mid].key > k) 
			high = mid - 1;
		else 
			low = mid + 1;
	}
	return 0;
}
*/
