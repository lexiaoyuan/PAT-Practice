/**
 *
 * @author ���˳�
 * 6-3 �����
 * ����Ҫ��ʵ��һ���������������N�������ĺ͡�
 * �����ӿڶ��壺
 * int Sum ( int List[], int N );
 * ���и����������������List[]�У�������N������Ԫ�ظ������ú����뷵��N��List[]Ԫ�صĺ͡�
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/735
 */
/*#include <stdio.h>

#define MAXN 10

int Sum(int List[], int N);

int main()
{
	int List[MAXN], N, i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &List[i]);
	printf("%d\n", Sum(List, N));

	return 0;
}

int Sum(int List[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + List[i];
	return sum;
}*/

#include<iostream>
using namespace std;
#define MAXN 10
int Sum(int List[], int N);
int main() {
	int List[MAXN], N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> List[i];
	cout<<Sum(List, N);
	return 0;
}
int Sum(int List[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + List[i];
	return sum;
}