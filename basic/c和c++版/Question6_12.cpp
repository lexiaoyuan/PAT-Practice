/**
 *
 * @author ���˳�
 * 6-12 �ж���ż��
 * ����Ҫ��ʵ���жϸ���������ż�Եĺ�����
 * �����ӿڶ��壺
 * int even( int n );
 * ����n���û���������Ͳ�������nΪż��ʱ����������1��nΪ����ʱ����0��ע�⣺0��ż����
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/744
 *
 */
/*#include <stdio.h>

int even(int n);

int main()
{
	int n;

	scanf_s("%d", &n);
	if (even(n))
		printf("%d is even.\n", n);
	else
		printf("%d is odd.\n", n);

	return 0;
}

int even(int n)
{
	return n % 2 == 0 ? 1 : 0;  // ż������1����������0
}
*/
#include<iostream>

int even(int n);

int main()
{
	int n;

	std::cin >> n;
	if (even(n))
		std::cout << n << " is even.\n";
	else
		std::cout << n << " is odd.\n";
	return 0;
}

int even(int n)
{
	return n % 2 == 0 ? 1 : 0;
}