/**
 *
 * @author ���˳�
 * 7-3 �������λ��
 * ����ÿ�ζ���һ����3λ����Ȼ�������λ��������֡�
 * ע�⣺����������ֺ��н�β��0ʱ�������Ӧ����ǰ����0����������700�����Ӧ����7��
 * �����ʽ��
 * ÿ��������һ��3λ����������
 * �����ʽ��
 * �����λ���������
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/783
 *
 */
/*#include<stdio.h>
int main() {
	int array[3];
	int number;
	scanf_s("%d", &number);
	for (int i = 0; i < 3; i++)
	{
		array[i] = number % 10;
		number = number / 10;
	}
	for (int j = 0; j < 3; j++)
	{
		if (array[j] || (array[1]==0 && array[0]!=0) )
			printf("%d", array[j]);
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int array[3];
	int number;
	cin >> number;
	for (int i = 0; i < 3; i++)
	{
		array[i] = number % 10;
		number = number / 10;
	}
	for (int j = 0; j < 3; j++)
	{
		if (array[j] || (array[1] == 0 && array[0] != 0))
			cout << array[j];
	}
	return 0;
}