/**
 *
 * @author ���˳�
 * 6-5 ���Զ�����Ԫ�ص����ֵ
 * ����Ҫ��ʵ��һ����������N������Ԫ��S[]�е����ֵ�����м���Ԫ�ص�����Ϊ�Զ����ElementType��
 * �����ӿڶ��壺
 * ElementType Max( ElementType S[], int N );
 * ���и�������Ԫ�ش��������S[]�У�������N������Ԫ�ظ�����
 * �ú����뷵��N��S[]Ԫ���е����ֵ����ֵҲ������ElementType���͡�
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/737
 */
/*#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N);

int main()
{
	ElementType S[MAXN];
	int N, i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%f", &S[i]);
	printf("%.2f\n", Max(S, N));

	return 0;
}

ElementType Max(ElementType S[], int N) {
	ElementType max = S[0];
	for (int i = 1; i < N; i++)
	{
		if (max < S[i])
		{
			max = S[i];
		}
	}
	return max;
}*/

#include<iostream>
#include<iomanip>
using namespace std;

#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N);

int main() {
	ElementType S[MAXN];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> S[i];
	cout << fixed << setprecision(2) << Max(S, N);
	return 0;
}

ElementType Max(ElementType S[], int N) {
	ElementType max = S[0];
	for (int i = 1; i < N; i++)
		if (max < S[i])
			max = S[i];
	return max;
}