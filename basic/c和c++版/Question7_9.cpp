/**
 *
 * @author ���˳�
 * 7-9 ����ƽ��С��
 * ������A��B��C����С��״��ͬ��������һ������������������ͬ��Ҫ���ҳ������һ������
 * �����ʽ��
 * ������һ���и���3����������˳���Ӧ��A��B��C��������
 * �����ʽ��
 * ��һ�������Ψһ���Ǹ���һ������
 * ����������
 * 1 1 2
 * ���������
 * C
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/789
 *
 */
/*#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b)
		printf("C");
	else if (a == c)
		printf("B");
	else if (b == c)
		printf("A");
	return 0;
}*/

#include<iostream>
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a == b)
		std::cout << "C";
	else if (a == c)
		std::cout << "B";
	else if (b == c)
		std::cout << "A";
	return 0;
}