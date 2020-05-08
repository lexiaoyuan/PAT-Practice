/**
 *
 * @author 徐仕成
 * 7-22 龟兔赛跑
 * 乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。乌龟每分钟可以前进3米，兔子每分钟前进9米；兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，
 * 于是，每跑10分钟回头看一下乌龟，若发现自己超过乌龟，就在路边休息，每次休息30分钟，否则继续跑10分钟；而乌龟非常努力，一直跑，不休息。
 * 假定乌龟与兔子在同一起点同一时刻开始起跑，请问T分钟后乌龟和兔子谁跑得快？
 * 输入格式：
 * 输入在一行中给出比赛时间T（分钟）。
 * 输出格式：
 * 在一行中输出比赛的结果：乌龟赢输出@_@，兔子赢输出^_^，平局则输出-_-；后跟1空格，再输出胜利者跑完的距离。
 * 输入样例：
 * 242
 * 输出样例：
 * @_@ 726
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/802
 *
 */
/*#include<stdio.h>
int main() {
	int T, tortoise = 0, rabbit = 0, time = 0, flag = 1;
	scanf_s("%d", &T);
	while (flag && time < T) {
		if (time % 10 == 0 && rabbit > tortoise) {
			for (int i = 0; i < 30; i++) {
				if (time == T) {  // 兔子休息中结束比赛
					flag = 0;
					break;
				}
				tortoise = tortoise + 3;
				time++;  // 兔子开始休息时，应该是乌龟先跑3米，时间再往后加
			}
		}
		else {
			time++;
			tortoise = tortoise + 3;
			rabbit = rabbit + 9;
		}
	}
	if (tortoise > rabbit)
		printf("@_@ %d", tortoise);
	else if (tortoise < rabbit)
		printf("^_^ %d", rabbit);
	else
		printf("-_- %d", rabbit);  // 平局也要输出距离
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int T, tortoise = 0, rabbit = 0, time = 0, flag = 1;
	cin >> T;
	while (flag && time < T) {
		if (time % 10 == 0 && rabbit > tortoise) {
			for (int i = 0; i < 30; i++) {
				if (time == T) {  // 兔子休息中结束比赛
					flag = 0;
					break;
				}
				tortoise = tortoise + 3;
				time++;  // 兔子开始休息时，应该是乌龟先跑3米，时间再往后加
			}
		}
		else {
			time++;
			tortoise = tortoise + 3;
			rabbit = rabbit + 9;
		}
	}
	if (tortoise > rabbit)
		cout << "@_@ " << tortoise;
	else if (tortoise < rabbit)
		cout << "^_^ " << rabbit;
	else
		cout << "-_- " << rabbit;  // 平局也要输出距离
	return 0;
}