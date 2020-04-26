/**
 *
 * @author ���˳�
 * 6-9 ͳ�Ƹ�λ����
 * ����Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ���������-21252�У�2������3�Σ���ú���Ӧ�÷���3��
 * �����ӿڶ��壺
 * int Count_Digit ( const int N, const int D );
 * ����N��D�����û�����Ĳ�����N��ֵ������int�ķ�Χ��D��[0, 9]�����ڵĸ�λ���������뷵��N��D���ֵĴ�����
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/741
 *
 */

/*
#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	scanf_s("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}

int Count_Digit(const int N, const int D) {
	int n = N;
	int number[10];
	int size = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		printf("number[%d]=%d\n", i, number[i]);
		n = n / 10;
		size++;
		if (n == 0) {
			break;
		}
	}
	for (int j = 0; j < size; j++) {
		if ((D + number[j] == 0) || (D - number[j]== 0)) {
			count++;
		}
	}
	return count;
}
*/
#include<iostream>
using namespace std;
int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	cin >> N >> D;
	cout<<Count_Digit(N, D);
	return 0;
}
int Count_Digit(const int N, const int D) {
	int n = N;
	int number[10];
	int size = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		n = n / 10;
		size++;
		if (n == 0) {
			break;
		}
	}
	for (int j = 0; j < size; j++) {
		if ((D + number[j] == 0) || (D - number[j] == 0)) {
			count++;
		}
	}
	return count;
}