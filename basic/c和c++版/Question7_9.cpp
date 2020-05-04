/**
 *
 * @author 徐仕成
 * 7-9 用天平找小球
 * 三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。
 * 输入格式：
 * 输入在一行中给出3个正整数，顺序对应球A、B、C的重量。
 * 输出格式：
 * 在一行中输出唯一的那个不一样的球。
 * 输入样例：
 * 1 1 2
 * 输出样例：
 * C
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/789
 *
 */
/*#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b)
		printf("C");
	else if (a == c)
		printf("B");
	else if (b == c)
		printf("A");
	return 0;
}*/

#include<iostream>
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a == b)
		std::cout << "C";
	else if (a == c)
		std::cout << "B";
	else if (b == c)
		std::cout << "A";
	return 0;
}