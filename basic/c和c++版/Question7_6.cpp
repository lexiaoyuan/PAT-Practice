/**
 *
 * @author ���˳�
 * 7-6 ����������ݸ�ʽ������
 * ����Ҫ���д����˳����븡����1���������ַ���������2���ٰ����ַ���������������1��������2��˳�������
 * �����ʽ��
 * ������һ����˳�����������1���������ַ���������2�������1���ո�ָ���
 * �����ʽ��
 * ��һ���а����ַ���������������1��������2��˳����������и���������С�����2λ��
 * ����������
 * 2.12 88 c 4.7
 * ���������
 * c 88 2.12 4.70
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/786
 *
 */
/*#include<stdio.h>
int main() {
	float f1, f2;
	int i;
	char c;
	//scanf("%f %d %c %f", &f1, &i, &c, &f2);  //����AC���������ﲻ��
	scanf_s("%f %d", &f1, &i);
	scanf_s(" %c", &c);  // %cǰ��Ŀո���ʡ
	scanf_s("%f", &f2);
	printf("%c %d %.2f %.2f\n", c, i, f1, f2);
	return 0;
}*/

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f1, f2;
	int i;
	char c;
	cin >> f1 >> i >> c >> f2;
	cout << c << " " << i << " " << fixed << setprecision(2) << f1 << " " << f2;
	return 0;
}