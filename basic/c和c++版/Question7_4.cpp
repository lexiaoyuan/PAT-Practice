/**
 *
 * @author ���˳�
 * 7-4 BCD����
 * BCD������һ���ֽ��������λʮ���Ƶ�����ÿ�ĸ����ر�ʾһλ���������һ��BCD����ʮ��������0x12�������ľ���ʮ���Ƶ�12��
 * ����С��ûѧ��BCD�������е�BCD����������������ת����ʮ��������ˡ�����BCD��0x12���������ʮ���Ƶ�18�ˣ�
 * ���ڣ���ĳ���Ҫ������������ʮ��������Ȼ�������ȷ��ʮ����������ʾ������԰�18ת����0x12��Ȼ����ת����12��
 * �����ʽ��
 * ������һ���и���һ��[0, 153]��Χ�ڵ�����������֤��ת������Ч��BCD����Ҳ����˵�������ת����ʮ������ʱ�������A-F�����֡�
 * �����ʽ��
 * �����Ӧ��ʮ��������
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/784
 *
 */
/*#include<stdio.h>
int main()
{
	int wrongNumber;
	scanf_s("%d", &wrongNumber);
	int BCD;
	BCD = wrongNumber / 16 * 10 + wrongNumber % 16;
	printf("%d", BCD);
	return 0;
}*/

#include<iostream>
using namespace std;
int main() {
	int wrongNumber;
	cin >> wrongNumber;
	cout << (wrongNumber / 16 * 10 + wrongNumber % 16);
	return 0;
}