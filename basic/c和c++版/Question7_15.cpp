/**
 *
 * @author ���˳�
 * 7-15 ����Բ����
 * ���������ϵʽ����Բ���ʵ�ֵ��ֱ�����һ���ֵС�ڸ�����ֵ��
 * ������Ŀ��ַ��
 * �����ʽ��
 * ������һ���и���С��1����ֵ��
 * �����ʽ��
 * ��һ�������������ֵ�����Ľ���Բ���ʣ������С�����6λ��
 * ����������
 * 0.01
 * ���������
 * 3.132157
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/795
 *
 */
/*#include<stdio.h>
int main() {
	float threshold, pi = 1, end =1;
	double numerator = 1, denominator = 1;  //����,��ĸ  �����ͻ����
	scanf_s("%f", &threshold);
	for (int i = 1; end >= threshold; i++)
	{
		numerator = numerator * i;
		denominator = denominator * (2 * i + 1);
		end = numerator / (denominator * 1.0);
		pi = pi + end;
	}
	printf("%.6f", pi * 2);
	return 0;
}*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float threshold, pi = 1, end = 1;
	double numerator = 1, denominator = 1;  //����,��ĸ  �����ͻ����
	cin >> threshold;
	for (int i = 1; end >= threshold; i++)
	{
		numerator = numerator * i;
		denominator = denominator * (2 * i + 1);
		end = numerator / (denominator * 1.0);
		pi = pi + end;
	}
	cout << fixed << setprecision(6) << pi * 2;
	return 0;
}