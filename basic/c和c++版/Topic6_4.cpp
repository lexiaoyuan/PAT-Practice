/**
 *
 * @author ���˳�
 * 6-4 ���Զ�����Ԫ�ص�ƽ��
 * ����Ҫ��ʵ��һ����������N������Ԫ��S[]��ƽ��ֵ�����м���Ԫ�ص�����Ϊ�Զ����ElementType��
 * �����ӿڶ��壺
 * ElementType Average( ElementType S[], int N );
 * ���и�������Ԫ�ش��������S[]�У�������N������Ԫ�ظ������ú����뷵��N��S[]Ԫ�ص�ƽ��ֵ��
 * ��ֵҲ������ElementType���͡�
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/736
 */
/*#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N);

int main()
{
	ElementType S[MAXN];
	int N, i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%f", &S[i]);
	printf("%.2f\n", Average(S, N));

	return 0;
}

ElementType Average(ElementType S[], int N) {
	ElementType sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + S[i];
	}
	return sum / N;
}*/

#include<iostream>
#include<iomanip>
using namespace std;
 
#define MAXN 10               //û�зֺ�
typedef float ElementType;    //�зֺ�

ElementType Average(ElementType S[], int N);

int main() {
	ElementType S[MAXN];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}
	cout << fixed << setprecision(2) << Average(S, N);
	return 0;
}

ElementType Average(ElementType S[], int N) {
	ElementType sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + S[i];
	return sum / N;
}