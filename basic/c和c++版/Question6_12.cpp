/**
 *
 * @author 徐仕成
 * 6-12 判断奇偶性
 * 本题要求实现判断给定整数奇偶性的函数。
 * 函数接口定义：
 * int even( int n );
 * 其中n是用户传入的整型参数。当n为偶数时，函数返回1；n为奇数时返回0。注意：0是偶数。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/744
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
	return n % 2 == 0 ? 1 : 0;  // 偶数返回1，奇数返回0
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