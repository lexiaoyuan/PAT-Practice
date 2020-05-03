/**
 *
 * @author 徐仕成
 * 7-7 12-24小时制
 * 编写一个程序，要求用户输入24小时制的时间，然后显示12小时制的时间。
 * 输入格式：
 * 输入在一行中给出带有中间的:符号（半角的冒号）的24小时制的时间，如12:34表示12点34分。
 * 当小时或分钟数小于10时，均没有前导的零，如5:6表示5点零6分。
 * 提示：在scanf的格式字符串中加入:，让scanf来处理这个冒号。
 * 输出格式：
 * 在一行中输出这个时间对应的12小时制的时间，数字部分格式与输入的相同，然后跟上空格，
 * 再跟上表示上午的字符串AM或表示下午的字符串PM。如5:6 PM表示下午5点零6分。
 * 注意，在英文的习惯中，中午12点被认为是下午，所以24小时制的12:00就是12小时制的12:0 PM；
 * 而0点被认为是第二天的时间，所以是0:0 AM。
 * 输入样例：
 * 21:11
 * 输出样例：
 * 9:11 PM
 *
 *【题目地址】：https://pintia.cn/problem-sets/14/problems/787
 */
/*#include<stdio.h>
int main() {
	int hour, minute;
	scanf_s("%d:%d", &hour, &minute);
	if (hour<12)  // 上午
	{
		printf("%d:%d AM", hour, minute);
	}
	else if(hour > 12) {  // 下午
		hour = hour - 12;
		printf("%d:%d PM", hour, minute);
	}
	else {  // 中午12点
		printf("%d:%d PM", hour, minute);
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int hour, minute;
	char colon;
	cin >> hour>>colon>>minute;
	if (hour < 12)  // 上午
	{
		cout << hour << ":" << minute << " AM" << endl;
	}
	else if (hour > 12) {  // 下午
		hour = hour - 12;
		cout << hour << ":" << minute << " PM" << endl;
	}
	else {  // 中午12点
		cout << hour << ":" << minute << " PM" << endl;
	}
	return 0;
}