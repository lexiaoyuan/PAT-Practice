/**
 *
 * @author 徐仕成
 * 7-6 混合类型数据格式化输入
 * 本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出。
 * 输入格式：
 * 输入在一行中顺序给出浮点数1、整数、字符、浮点数2，其间以1个空格分隔。
 * 输出格式：
 * 在一行中按照字符、整数、浮点数1、浮点数2的顺序输出，其中浮点数保留小数点后2位。
 * 输入样例：
 * 2.12 88 c 4.7
 * 输出样例：
 * c 88 2.12 4.70
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/786
 *
 */
/*#include<stdio.h>
int main() {
	float f1, f2;
	int i;
	char c;
	//scanf("%f %d %c %f", &f1, &i, &c, &f2);  //可以AC，但是这里不行
	scanf_s("%f %d", &f1, &i);
	scanf_s(" %c", &c);  // %c前面的空格不能省
	scanf_s("%f", &f2);
	printf("%c %d %.2f %.2f\n", c, i, f1, f2);
	return 0;
}*/

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f1, f2;
	int i;
	char c;
	cin >> f1 >> i >> c >> f2;
	cout << c << " " << i << " " << fixed << setprecision(2) << f1 << " " << f2;
	return 0;
}