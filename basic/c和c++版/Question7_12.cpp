/**
 *
 * @author ���˳�
 * 7-12 �������ļ򵥼�����
 * ����Ҫ���дһ���򵥼��������򣬿ɸ�����������������2���������мӡ������ˡ������������㡣��Ŀ��֤�������������������ͷ�Χ��
 * �����ʽ��
 * ������һ�����������������1���������������2�������1���ո�ָ�������������������Ϊ���ͣ��ұ�֤����������ķ�ĸ���㡣
 * �����ʽ��
 * �������Ϊ+��-��*��/��%ʱ����һ�������Ӧ�����������������ǷǷ����ţ������˼ӡ������ˡ������������������������������ţ������ERROR��
 * ��������1��
 * -7 / 2
 * �������1��
 * -3
 * ��������2��
 * 3 & 6
 * �������2��
 * ERROR
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/792
 *
 */
/*#include<stdio.h>
int main() {
	int operand1, operand2;
	char operatorC;
	scanf_s("%d", &operand1);
	scanf_s(" %c", &operatorC);
	scanf_s("%d", &operand2);
	if (operatorC == '+')
		printf("%d", operand1 + operand2);
	else if (operatorC == '-')
		printf("%d", operand1 - operand2);
	else if (operatorC == '*')
		printf("%d", operand1 * operand2);
	else if (operatorC == '/')
		printf("%d", operand1 / operand2);
	else if (operatorC == '%')
		printf("%d", operand1 % operand2);
	else
		printf("ERROR");
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int operand1, operand2;
	char operatorC;
	cin >> operand1 >> operatorC >> operand2;
	//cin >> operatorC;
	//cin >> operand2;
	if (operatorC == '+')
		printf("%d", operand1 + operand2);
	else if (operatorC == '-')
		printf("%d", operand1 - operand2);
	else if (operatorC == '*')
		printf("%d", operand1 * operand2);
	else if (operatorC == '/')
		printf("%d", operand1 / operand2);
	else if (operatorC == '%')
		printf("%d", operand1 % operand2);
	else
		printf("ERROR");
	return 0;
}