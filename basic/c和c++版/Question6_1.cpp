/**
 *
 * @author 徐仕成
 *
 * 6-1 简单输出整数
 * 本题要求实现一个函数，对给定的正整数N，打印从1到N的全部正整数。
 * 函数接口定义：
 * void PrintN ( int N );
 * 其中N是用户传入的参数。该函数必须将从1到N的全部正整数顺序打印出来，每个数字占1行。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/733
 */

#include <stdio.h>
void PrintN(int N);
int main()
{
	int N;

	scanf_s("%d", &N);
	PrintN(N);

	return 0;
}

void PrintN(int N) {
	for (int i = 0; i < N; i++)
		printf("%d\n", i + 1);
}

/*
#include <iostream>
using namespace std;
void PrintN(int N);
int main() 
{
	int N;
	cin >> N;
	PrintN(N);
	return 0;
}
void PrintN(int N) {
	for (int i = 1; i <= N; i++)
		cout << i << endl;
}
*/
