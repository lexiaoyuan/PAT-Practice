/**
 *
 * @author ���˳�
 * 7-7 12-24Сʱ��
 * ��дһ������Ҫ���û�����24Сʱ�Ƶ�ʱ�䣬Ȼ����ʾ12Сʱ�Ƶ�ʱ�䡣
 * �����ʽ��
 * ������һ���и��������м��:���ţ���ǵ�ð�ţ���24Сʱ�Ƶ�ʱ�䣬��12:34��ʾ12��34�֡�
 * ��Сʱ�������С��10ʱ����û��ǰ�����㣬��5:6��ʾ5����6�֡�
 * ��ʾ����scanf�ĸ�ʽ�ַ����м���:����scanf���������ð�š�
 * �����ʽ��
 * ��һ����������ʱ���Ӧ��12Сʱ�Ƶ�ʱ�䣬���ֲ��ָ�ʽ���������ͬ��Ȼ����Ͽո�
 * �ٸ��ϱ�ʾ������ַ���AM���ʾ������ַ���PM����5:6 PM��ʾ����5����6�֡�
 * ע�⣬��Ӣ�ĵ�ϰ���У�����12�㱻��Ϊ�����磬����24Сʱ�Ƶ�12:00����12Сʱ�Ƶ�12:0 PM��
 * ��0�㱻��Ϊ�ǵڶ����ʱ�䣬������0:0 AM��
 * ����������
 * 21:11
 * ���������
 * 9:11 PM
 *
 *����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/787
 */
/*#include<stdio.h>
int main() {
	int hour, minute;
	scanf_s("%d:%d", &hour, &minute);
	if (hour<12)  // ����
	{
		printf("%d:%d AM", hour, minute);
	}
	else if(hour > 12) {  // ����
		hour = hour - 12;
		printf("%d:%d PM", hour, minute);
	}
	else {  // ����12��
		printf("%d:%d PM", hour, minute);
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int hour, minute;
	char colon;
	cin >> hour>>colon>>minute;
	if (hour < 12)  // ����
	{
		cout << hour << ":" << minute << " AM" << endl;
	}
	else if (hour > 12) {  // ����
		hour = hour - 12;
		cout << hour << ":" << minute << " PM" << endl;
	}
	else {  // ����12��
		cout << hour << ":" << minute << " PM" << endl;
	}
	return 0;
}