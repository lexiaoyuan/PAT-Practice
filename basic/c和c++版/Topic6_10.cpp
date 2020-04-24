/**
 *
 * @author ���˳�
 * 6-10 �׳˼���������
 * ����Ҫ��ʵ��һ����ӡ�Ǹ������׳˵ĺ�����
 * �����ӿڶ��壺
 * void Print_Factorial ( const int N );
 * ����N���û�����Ĳ�������ֵ������1000�����N�ǷǸ���������ú���������һ���д�ӡ��N!��ֵ�������ӡ��Invalid input����
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/742
 *
 */
/*
#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
	int N;

	scanf_s("%d", &N);
	Print_Factorial(N);
	return 0;
}

void Print_Factorial(const int N) {
	if (N < 0) {
		printf("Invalid input\n");
		return;
	}
	int number[3000] = { 0 };  //��ʼ��ȫΪ0
	int product;  // �˻�
	int carry;  //��λ
	int size = 1;  //��¼�����е�Ԫ�ظ���
	int flag, i;

	number[0] = 1;   //��0λΪ1
	
	for (int v = 2; v <= N; v++) {  // ����׳�
		for (i = 0; i < size; i++) {   // ��������
			// ---�����㷨������˻��ͽ�λ���������� ---
			carry = 0;  //��λֻ��һ�Σ������Ҫ��0
			flag = 1;  //ѭ����־��������ʱ����ѭ��
			while (flag) {   
				product = number[i] * v + carry;  // ÿ�μ���˻�Ҫ����ǰһ�εĽ�λ
				number[i] = product % 10;
				if (product >= 10) {   //���ڵ���10Ҫ�����λ
					carry = product / 10;
					i++;
					flag = 1;
				}
				else {
					flag = 0;
				}
			}
		}
		size = i;   //i�Ϳ��Է�ӳ��ǰ���˶���λ��
	}
	printf("size=%d\n", size);
	for (i = size-1; i >=0 ; i--)
		printf("%d", number[i]);
}
*/
#include<iostream>
using namespace std;
void Print_Factorial(const int N);

int main()
{
	int N;

	cin >> N;
	Print_Factorial(N);
	return 0;
}

void Print_Factorial(const int N) {
	if (N < 0) {
		cout << "Invalid input\n";
		return;
	}
	int number[3000] = { 0 };  //��ʼ��ȫΪ0
	int product;  // �˻�
	int carry;  //��λ
	int size = 1;  //��¼�����е�Ԫ�ظ���
	int flag, i;

	number[0] = 1;   //��0λ��Ϊ1

	for (int v = 2; v <= N; v++) {  // ����׳�
		for (i = 0; i < size; i++) {   // ��������
			// ---�����㷨������˻��ͽ�λ���������� ---
			carry = 0;  //��λֻ��һ�Σ������Ҫ��0
			flag = 1;  //ѭ����־��������ʱ����ѭ��
			while (flag) {
				product = number[i] * v + carry;  // ÿ�μ���˻�Ҫ����ǰһ�εĽ�λ
				number[i] = product % 10;
				if (product >= 10) {   //���ڵ���10Ҫ�����λ
					carry = product / 10;
					i++;
					flag = 1;
				}
				else {
					flag = 0;
				}
			}
		}
		size = i;   //i�Ϳ��Է�ӳ��ǰ���˶���λ��
	}
	cout << "size=" << size << endl;
	for (i = size - 1; i >= 0; i--)
		cout << number[i];
}
