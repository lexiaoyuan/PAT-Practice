/**
 *
 * @author 徐仕成
 * 6-2 多项式求值
 * 本题要求实现一个函数，计算阶数为n，系数为a[0] ... a[n]的多项式f(x)=∑i=0n(a[i]×xi) 在x点的值。
 * 函数接口定义：
 *	double f( int n, double a[], double x );
 * 其中n是多项式的阶数，a[]中存储系数，x是给定点。函数须返回多项式f(x)的值。
 *
 *【题目地址】：https://pintia.cn/problem-sets/14/problems/734
 */

/*#include <stdio.h>

#define MAXN 10

double f(int n, double a[], double x);

int main()
{
	int n, i;
	double a[MAXN], x;

	scanf_s("%d %lf", &n, &x);
	for (i = 0; i <= n; i++)
		scanf_s("%lf", &a[i]);
	printf("%.1f\n", f(n, a, x));
	return 0;
}

double f(int n, double a[], double x) {
	double sum = 0;
	double y = 1;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			y = x * y;
			break;
		}
		sum = sum + a[i] * y;
	}
	return sum;
}*/


#include <iostream>
#include <iomanip>
using namespace std;
#define MAXN 10
double f(int n, double a[], double x);
int main()
{
	int n;
	double a[MAXN], x;
	cin >> n >> x;
	for (int i = 0; i <= n; i++)
	{
		cin >> a[i];
	}
	cout <<fixed<<setprecision(1)<<f(n, a, x);   // 以固定浮点位显示，且以一位小数显示
	return 0;
}
double f(int n, double a[], double x) {
	double sum = 0;
	double y = 1;
	for (int i = 0; i <= n; i++)
	{
		//for (int j = 0; j < i; j++)
		//{
		//	y = x * y;
		//	break;  // 每次多乘一个x就可以了
		//}
		if (i > 0) 
			y = x * y;
		sum = sum + a[i] * y;
	}
	return sum;
}

