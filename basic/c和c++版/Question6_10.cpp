/**
 *
 * @author 徐仕成
 * 6-10 阶乘计算升级版
 * 本题要求实现一个打印非负整数阶乘的函数。
 * 函数接口定义：
 * void Print_Factorial ( const int N );
 * 其中N是用户传入的参数，其值不超过1000。如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。
 *
 * 【题目网址】：https://pintia.cn/problem-sets/14/problems/742
 *
 */
/*
#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
	int N;

	scanf_s("%d", &N);
	Print_Factorial(N);
	return 0;
}

void Print_Factorial(const int N) {
	if (N < 0) {
		printf("Invalid input\n");
		return;
	}
	int number[3000] = { 0 };  //初始化全为0
	int product;  // 乘积
	int carry;  //进位
	int size = 1;  //记录数组中的元素个数
	int flag, i;

	number[0] = 1;   //第0位为1
	
	for (int v = 2; v <= N; v++) {  // 计算阶乘
		for (i = 0; i < size; i++) {   // 遍历数组
			// ---核心算法：计算乘积和进位并存入数组 ---
			carry = 0;  //进位只加一次，用完后要归0
			flag = 1;  //循环标志，方便随时跳出循环
			while (flag) {   
				product = number[i] * v + carry;  // 每次计算乘积要加上前一次的进位
				number[i] = product % 10;
				if (product >= 10) {   //大于等于10要计算进位
					carry = product / 10;
					i++;
					flag = 1;
				}
				else {
					flag = 0;
				}
			}
		}
		size = i;   //i就可以反映当前存了多少位数
	}
	printf("size=%d\n", size);
	for (i = size-1; i >=0 ; i--)
		printf("%d", number[i]);
}
*/
#include<iostream>
using namespace std;
void Print_Factorial(const int N);

int main()
{
	int N;

	cin >> N;
	Print_Factorial(N);
	return 0;
}

void Print_Factorial(const int N) {
	if (N < 0) {
		cout << "Invalid input\n";
		return;
	}
	int number[3000] = { 0 };  //初始化全为0
	int product;  // 乘积
	int carry;  //进位
	int size = 1;  //记录数组中的元素个数
	int flag, i;

	number[0] = 1;   //第0位置为1

	for (int v = 2; v <= N; v++) {  // 计算阶乘
		for (i = 0; i < size; i++) {   // 遍历数组
			// ---核心算法：计算乘积和进位并存入数组 ---
			carry = 0;  //进位只加一次，用完后要归0
			flag = 1;  //循环标志，方便随时跳出循环
			while (flag) {
				product = number[i] * v + carry;  // 每次计算乘积要加上前一次的进位
				number[i] = product % 10;
				if (product >= 10) {   //大于等于10要计算进位
					carry = product / 10;
					i++;
					flag = 1;
				}
				else {
					flag = 0;
				}
			}
		}
		size = i;   //i就可以反映当前存了多少位数
	}
	cout << "size=" << size << endl;
	for (i = size - 1; i >= 0; i--)
		cout << number[i];
}
