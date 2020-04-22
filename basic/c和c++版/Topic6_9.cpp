/**
 *
 * @author 徐仕成
 * 6-9 统计个位数字
 * 本题要求实现一个函数，可统计任一整数中某个位数出现的次数。例如-21252中，2出现了3次，则该函数应该返回3。
 * 函数接口定义：
 * int Count_Digit ( const int N, const int D );
 * 其中N和D都是用户传入的参数。N的值不超过int的范围；D是[0, 9]区间内的个位数。函数须返回N中D出现的次数。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/741
 *
 */

/*
#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	scanf_s("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}

int Count_Digit(const int N, const int D) {
	int n = N;
	int number[10];
	int size = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		printf("number[%d]=%d\n", i, number[i]);
		n = n / 10;
		size++;
		if (n == 0) {
			break;
		}
	}
	for (int j = 0; j < size; j++) {
		if ((D + number[j] == 0) || (D - number[j]== 0)) {
			count++;
		}
	}
	return count;
}
*/
#include<iostream>
using namespace std;
int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	cin >> N >> D;
	cout<<Count_Digit(N, D);
	return 0;
}
int Count_Digit(const int N, const int D) {
	int n = N;
	int number[10];
	int size = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		n = n / 10;
		size++;
		if (n == 0) {
			break;
		}
	}
	for (int j = 0; j < size; j++) {
		if ((D + number[j] == 0) || (D - number[j] == 0)) {
			count++;
		}
	}
	return count;
}