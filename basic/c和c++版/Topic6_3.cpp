/**
 *
 * @author 徐仕成
 * 6-3 简单求和
 * 本题要求实现一个函数，求给定的N个整数的和。
 * 函数接口定义：
 * int Sum ( int List[], int N );
 * 其中给定整数存放在数组List[]中，正整数N是数组元素个数。该函数须返回N个List[]元素的和。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/735
 */
/*#include <stdio.h>

#define MAXN 10

int Sum(int List[], int N);

int main()
{
	int List[MAXN], N, i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &List[i]);
	printf("%d\n", Sum(List, N));

	return 0;
}

int Sum(int List[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + List[i];
	return sum;
}*/

#include<iostream>
using namespace std;
#define MAXN 10
int Sum(int List[], int N);
int main() {
	int List[MAXN], N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> List[i];
	cout<<Sum(List, N);
	return 0;
}
int Sum(int List[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + List[i];
	return sum;
}