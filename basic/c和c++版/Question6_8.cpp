/**
 *
 * @author 徐仕成
 * 6-8 简单阶乘计算
 * 本题要求实现一个计算非负整数阶乘的简单函数。
 * 函数接口定义：
 * int Factorial( const int N );
 * 其中N是用户传入的参数，其值不超过12。如果N是非负整数，则该函数必须返回N的阶乘，否则返回0。
 *
 *【题目地址】：https://pintia.cn/problem-sets/14/problems/740
 */
/*
#include <stdio.h>

int Factorial(const int N);

int main()
{
	int N, NF;

	scanf_s("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}
int Factorial(const int N) {
	int product = 1;
	if (N >= 0) {
		for (int i = 2; i <= N; i++)
			product = product * i;
		return product;
	}
	return 0;
}
*/
#include<iostream>
using namespace std;
int Factorial(const int N);
int main() {
	int N, NF;

	cin >> N;
	NF = Factorial(N);
	if (NF)  cout << N<<"! = " << NF<<endl;
	else cout << "Invalid input"<<endl;
	return 0;
}
int Factorial(const int N) {
	int product = 1;
	if (N >= 0) {
		for (int i = 2; i <= N; i++)
			product = product * i;
		return product;
	}
	return 0;
}