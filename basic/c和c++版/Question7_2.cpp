/**
 *
 * @author ���˳�
 * 7-2 Ȼ���Ǽ���
 * ��ʱ����������λ���ֱ�ʾһ��ʱ�䣬����1106��ʾ11����6�֡����ڣ���ĳ���Ҫ������ʼʱ������ŵ�ʱ��������ֹʱ�䡣
 * �����������֣���һ����������������λ���ֱ�ʾ��ǰʱ�䣬�ڶ������ֱ�ʾ�����������㵱ǰʱ�侭����ô����Ӻ��Ǽ��㣬
 * ���Ҳ��ʾΪ��λ���֡���СʱΪ��λ��ʱ��û��ǰ�����㣬��5��30�ֱ�ʾΪ530��
 * ע�⣬�ڶ������ֱ�ʾ�ķ��������ܳ���60��Ҳ�����Ǹ�����
 * �����ʽ��
 * ������һ���и���2���������ֱ�����λ���ֱ�ʾ����ʼʱ�䡢�Լ����ŵķ�����������Կո�ָ���
 * ע�⣺����ʼʱ���У���СʱΪ��λ��ʱ��û��ǰ�����㣬��5��30�ֱ�ʾΪ530�����ŵķ��������ܳ���60��Ҳ�����Ǹ�����
 * �����ʽ��
 * �����λ���ֱ�ʾ����ֹʱ�䣬��СʱΪ��λ��ʱ��û��ǰ�����㡣��Ŀ��֤��ʼʱ�����ֹʱ����ͬһ���ڡ�
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/782
 * 
 * �ؼ��Ĳ��Ե㣺
 * ���룺1120 110   �����1310
 * ���룺1000 -588   �����12
 */
/*#include<stdio.h>
int main() {
	int minute, startTime, stopTime;
	int elapsed;  //���ŵ�
	scanf_s("%d %d", &startTime, &elapsed);
	minute = (startTime / 100) * 60 + startTime % 100;  //����ʼʱ�仯Ϊ����
	stopTime = minute + elapsed;
	stopTime = (stopTime / 60) * 100 + stopTime % 60;  // �ٰѷ��ӻ�ΪСʱ
	printf("%d", stopTime);
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int minute, startTime, stopTime, elapsed;
	cin >> startTime >> elapsed;
	minute = (startTime / 100) * 60 + startTime % 100;
	stopTime = minute + elapsed;
	stopTime = (stopTime / 60) * 100 + stopTime % 60;
	cout << stopTime;
	return 0;
}