/**
 *
 * @author ���˳�
 * 7-8 �����ж�
 * ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����
 * �����ʽ��
 * ������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�
 * �����ʽ��
 * ��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK��
 * ��������1��
 * 40
 * �������1��
 * Speed: 40 - OK
 * ��������2��
 * 75
 * �������2��
 * Speed: 75 - Speeding
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/788
 *
 */
/*#include<stdio.h>
int main()
{
	int speed;
	scanf_s("%d", &speed);
	if (speed <= 60)
		printf("Speed: %d - OK", speed);
	if (speed > 60)
		printf("Speed: %d - Speeding", speed);
	return 0;
}*/

#include<iostream>
int main()
{
	int speed;
	std::cin >> speed;
	if (speed <= 60)
		std::cout << "Speed: " << speed << " - OK";
	if (speed > 60)
		std::cout << "Speed: " << speed << " - Speeding";
	return 0;
}