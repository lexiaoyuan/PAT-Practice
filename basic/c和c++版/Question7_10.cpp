/**
 *
 * @author ���˳�
 * 7-10 ���㹤��
 * ĳ��˾Ա���Ĺ��ʼ��㷽�����£�һ���ڹ���ʱ�䲻����40Сʱ������������ʱ��Ƴꣻ����40Сʱ�Ĺ���ʱ�䲿�֣�
 * ����������ʱ�䱨���1.5���ƳꡣԱ��������˾ʱ���Ϊ��ְ������ְ��������˾������5���Ա��Ϊ��ְ����5�����µ�Ϊ��ְ����
 * ��ְ������������Ϊ30Ԫ/Сʱ����ְ������������Ϊ50Ԫ/Сʱ���밴�üƳ귽ʽ����Ա���Ĺ��ʡ�
 * �����ʽ��
 * ������һ���и���2�����������ֱ�ΪĳԱ����ְ�������ܹ���ʱ�䣬����Կո�ָ���
 * �����ʽ��
 * ��һ�������Ա������н����ȷ��С�����2λ��
 * ��������1��
 * 5 40
 * �������1��
 * 2000.00
 * ��������2��
 * 3 50
 * �������2��
 * 1650.00
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/790
 *
 */
/*#include<stdio.h>
int main()
{
	int age, time;
	float wage;
	scanf_s("%d %d", &age, &time);
	if (age < 5) {  //��Ա��
		if (time<=40)
			wage = 30 * time;
		else
			wage = 30 * 40 + 30 * 1.5 * (time - 40);
	}
	else {  // ��Ա��
		if (time <= 40)
			wage = 50 * time;
		else 
			wage = 50 * 40 + 50 * 1.5 * (time - 40);
	}
	printf("%.2f", wage);
	return 0;
}*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int age, time;
	float wage;
	cin >> age >> time;
	if (age < 5) {  //��Ա��
		if (time <= 40)
			wage = 30 * time;
		else
			wage = 30 * 40 + 30 * 1.5 * (time - 40);
	}
	else {  // ��Ա��
		if (time <= 40)
			wage = 50 * time;
		else
			wage = 50 * 40 + 50 * 1.5 * (time - 40);
	}
	cout << fixed << setprecision(2) << wage;
	return 0;
}