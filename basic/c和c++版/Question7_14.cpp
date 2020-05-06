/**
 *
 * @author 徐仕成
 * 7-14 求整数段和
 * 给定两个整数A和B，输出从A到B的所有整数以及这些数的和。
 * 输入格式：
 * 输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。
 * 输出格式：
 * 首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。
 * 输入样例：
 * -3 8
 * 输出样例：
 * -3   -2   -1    0    1
 *  2    3    4    5    6
 *  7    8
 * Sum = 30
 *
 * 【题目地址】： https://pintia.cn/problem-sets/14/problems/794
 *
 */
/*#include<stdio.h>
int main() {
	int a, b, sum = 0, count=1;
	scanf_s("%d %d", &a, &b);
	for (int i = a; i <= b; i++, count++)
	{
		printf("%5d", i);
		if (count % 5 == 0)
			printf("\n");
		sum = sum + i;
	}
	if((count-1)%5==0)  // 避免多换行一次
		printf("Sum = %d", sum);
	else 
	    printf("\nSum = %d", sum);
	return 0;
}*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b, sum = 0, count = 1;
	cin >> a >> b;
	for (int i = a; i <= b; i++, count++)
	{
		cout << setw(5) << i;  //设置宽度setw
		if (count % 5 == 0)
			cout << endl;
		sum = sum + i;
	}
	if ((count - 1) % 5 == 0)  // 避免多换行一次
		cout << "Sum = " << sum;
	else
		cout << endl << "Sum = " << sum;
	return 0;
}