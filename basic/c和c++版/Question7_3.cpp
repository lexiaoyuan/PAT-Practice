/**
 *
 * @author 徐仕成
 * 7-3 逆序的三位数
 * 程序每次读入一个正3位数，然后输出按位逆序的数字。
 * 注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
 * 输入格式：
 * 每个测试是一个3位的正整数。
 * 输出格式：
 * 输出按位逆序的数。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/783
 *
 */
/*#include<stdio.h>
int main() {
	int array[3];
	int number;
	scanf_s("%d", &number);
	for (int i = 0; i < 3; i++)
	{
		array[i] = number % 10;
		number = number / 10;
	}
	for (int j = 0; j < 3; j++)
	{
		if (array[j] || (array[1]==0 && array[0]!=0) )
			printf("%d", array[j]);
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int array[3];
	int number;
	cin >> number;
	for (int i = 0; i < 3; i++)
	{
		array[i] = number % 10;
		number = number / 10;
	}
	for (int j = 0; j < 3; j++)
	{
		if (array[j] || (array[1] == 0 && array[0] != 0))
			cout << array[j];
	}
	return 0;
}