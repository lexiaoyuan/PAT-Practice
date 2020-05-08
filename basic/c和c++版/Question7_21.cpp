/**
 *
 * @author ���˳�
 * 7-21 �����ⷽ�̵���������
 * ����Ҫ������������������N���󷽳�X^2+Y^2=N��ȫ���������⡣
 * �����ʽ��
 * ������һ���и���������N����10000����
 * �����ʽ��
 * �������X^2+Y^2=N��ȫ���������⣬����X��Y��ÿ���ռ1�У������ּ���1�ո�ָ�����X�ĵ���˳����������û�н⣬�����No Solution��
 * ��������1��
 * 884
 * �������1��
 * 10 28
 * 20 22
 * ��������2��
 * 11
 * �������2��
 * No Solution
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/801
 *
 */
/*#include<stdio.h>
int main() {
	int N, flag=1;
	scanf_s("%d", &N);
	for (int x = 1; x <= 100; x++) {  // �������⣬x,y��Ҫ����0
		for (int y = 1; y <= 100; y++) {
			if (x <= y && x * x + y * y - N == 0) {
				printf("%d %d\n", x, y);
				flag = 0;
			}
		}
	}
	if (flag)
		printf("No Solution");
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int N, flag = 1;
	cin >> N;
	for (int x = 1; x <= 100; x++) {  // �������⣬x,y��Ҫ����0
		for (int y = 1; y <= 100; y++) {
			if (x <= y && x * x + y * y - N == 0) {
				cout << x << " " << y << endl;
				flag = 0;
			}
		}
	}
	if (flag)
		cout<< "No Solution";
	return 0;
}