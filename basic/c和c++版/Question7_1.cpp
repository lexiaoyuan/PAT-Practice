/**
 *
 * @author ���˳�
 * 7-1 ���׻���Ӣ��Ӣ��
 * �����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ������(foot+inch/12)��0.3048��
 * ���ڣ�����û������������������ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣
 * �����ʽ��
 * ������һ���и���1������������λ�����ס�
 * �����ʽ��
 * ��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/781
 *
 */
/*#include<stdio.h>

void Conversion(int cm);

int main() {
	int cm;
	scanf_s("%d", &cm);
	Conversion(cm);
	return 0;
}
void Conversion(int cm) {
	int foot, inch;
	float m;
	m = (cm / 100.0) / 0.3048;  //��������ټ���
	foot = m;
	inch = (m - foot) * 100;
	if (inch % 10 >= 5) //��������
		inch = (m - foot) * 10 + 1;
	else 
		inch = (m - foot) * 10;
	printf("%d %d", foot, inch);
}*/
#include<iostream>
using namespace std;

void Conversion(int cm);

int main() {
	int cm;
	cin >> cm;
	Conversion(cm);
	return 0;
}
void Conversion(int cm) {
	int foot, inch;
	float m;
	m = (cm / 100.0) / 0.3048;  //��������ټ���
	foot = m;
	inch = (m - foot) * 100;
	if (inch % 10 >= 5)  //��������
		inch = (m - foot) * 10 + 1;  
	else 
		inch = (m - foot) * 10;
	cout << foot << " "<< inch;
}
