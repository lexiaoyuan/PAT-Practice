/**
 *
 * @author 徐仕成
 * 7-4 BCD解密
 * BCD数是用一个字节来表达两位十进制的数，每四个比特表示一位。所以如果一个BCD数的十六进制是0x12，它表达的就是十进制的12。
 * 但是小明没学过BCD，把所有的BCD数都当作二进制数转换成十进制输出了。于是BCD的0x12被输出成了十进制的18了！
 * 现在，你的程序要读入这个错误的十进制数，然后输出正确的十进制数。提示：你可以把18转换回0x12，然后再转换回12。
 * 输入格式：
 * 输入在一行中给出一个[0, 153]范围内的正整数，保证能转换回有效的BCD数，也就是说这个整数转换成十六进制时不会出现A-F的数字。
 * 输出格式：
 * 输出对应的十进制数。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/784
 *
 */
/*#include<stdio.h>
int main()
{
	int wrongNumber;
	scanf_s("%d", &wrongNumber);
	int BCD;
	BCD = wrongNumber / 16 * 10 + wrongNumber % 16;
	printf("%d", BCD);
	return 0;
}*/

#include<iostream>
using namespace std;
int main() {
	int wrongNumber;
	cin >> wrongNumber;
	cout << (wrongNumber / 16 * 10 + wrongNumber % 16);
	return 0;
}