/**
 *
 * @author ���˳�
 * 7-19 ֧Ʊ���
 * һ���ɹ�Աȥ���жһ�һ��yԪf�ֵ�֧Ʊ���������Ա�����fԪy�֡��ɹ�Ա��ȥ��n��֮��ŷ����д�����������������2yԪ2f�֣��ʸ�֧Ʊ����Ƕ��٣�
 * �����ʽ��
 * ������һ���и���С��100��������n��
 * �����ʽ��
 * ��һ���а���ʽy.f�����֧Ʊ��ԭʼ������޽⣬�����No Solution��
 * ��������1��
 * 23
 * ��������2��
 * 22
 * �������2��
 * No Solution
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/799
 *
 *
 */
/*#include<stdio.h>
int main() {
	int y, f, n;
	scanf_s("%d", &n);
	for (y = 0; y < 50; y++) {
		for (f = 0; f < 100; f++) {
			if (98 * f - 199 * y - n == 0) {
				printf("%d.%d", y, f);
				return 0;
			}
		}
	}
	printf("No Solution");
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int y, f, n;
	cin >> n;
	for (y = 0; y < 50; y++) {
		for (f = 0; f < 100; f++) {
			if (98 * f - 199 * y - n == 0) {
				cout << y << "." << f;
				return 0;
			}
		}
	}
	cout << "No Solution";
	return 0;
}