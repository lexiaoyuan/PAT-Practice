/**
 *
 * @author 徐仕成
 * 6-11 求自定类型元素序列的中位数
 * 本题要求实现一个函数，求N个集合元素A[]的中位数，即序列中第⌊(N+1)/2⌋大的元素。
 * 其中集合元素的类型为自定义的ElementType。
 * 函数接口定义：
 * ElementType Median( ElementType A[], int N );
 * 其中给定集合元素存放在数组A[]中，正整数N是数组元素个数。该函数须返回N个A[]元素的中位数，其值也必须是ElementType类型。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/743
 *
 */
/*
#include <stdio.h>

#define MAXN 1000
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
	ElementType A[MAXN];
	int N, i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}
ElementType Median(ElementType A[], int N) {
	int increment = N / 2;
	ElementType tmp;
	int i, j;
	while (increment) {
		for (i = 0; i < N-increment; i++)
		{
			for (j = i+increment; (j-increment)>=0 && A[j-increment] > A[j]; j = j - increment )
			{
				tmp = A[j - increment];
				A[j - increment] = A[j];
				A[j] = tmp;
			}
		}
		increment = increment / 2;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%.2f ", A[i]);
	}
	printf("\n");
	return A[N / 2];
}*/
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

#define MAXN 1000
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
	ElementType A[MAXN];
	int N, i;

	cin >> N;
	for (i = 0; i < N; i++)
		cin >> A[i];
	cout << fixed << setprecision(2) << Median(A, N)<<endl;

	return 0;
}
ElementType Median(ElementType A[], int N) {
	sort(A, A+N, greater<ElementType>());  //不写第三个参数，默认升序。greater<ElementType>()表示降序
	for (int i = 0; i < N; i++)
	{
		printf("%.2f ", A[i]);
	}
	printf("\n");
	return A[N / 2];
}
