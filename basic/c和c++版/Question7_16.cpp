/**
 *
 * @author 徐仕成
 * 7-16 求符合给定条件的整数集
 * 给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
 * 输入格式：
 * 输入在一行中给出A。
 * 输出格式：
 * 输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
 * 输入样例：
 * 2
 * 输出样例：
 * 234 235 243 245 253 254
 * 324 325 342 345 352 354
 * 423 425 432 435 452 453
 * 523 524 532 534 542 543
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/796
 *
 */
/*#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int number[4] = {a, a+1, a+2, a+3};
	int row = 0, col = 0;  //统计行数和列数，控制行后面的换行和列后面的空格
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j!=i)
			{
				for (int k = 0; k < 4; k++)
				{
					if (k!=i && k!=j)
					{
						printf("%d%d%d", number[i], number[j], number[k]);
						col++;
						if (col<6)
							printf(" ");
					}
				}
			}
		}
		row++;
		if (row<4)
			printf("\n");
		col = 0;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int number[4] = { a, a + 1, a + 2, a + 3 };
	int row = 0, col = 0;  //统计行数和列数，控制行后面的换行和列后面的空格
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j != i)
			{
				for (int k = 0; k < 4; k++)
				{
					if (k != i && k != j)
					{
						cout << number[i] << number[j] << number[k];
						col++;
						if (col < 6)
							cout << " ";
					}
				}
			}
		}
		row++;
		if (row < 4)
			cout << endl;
		col = 0;
	}
	return 0;
}