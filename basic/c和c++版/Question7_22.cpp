/**
 *
 * @author ���˳�
 * 7-22 ��������
 * �ڹ������ӽ������ܣ��ܳ���һ�������ܵ����ܵ��߿�����ؽ�����Ϣ���ڹ�ÿ���ӿ���ǰ��3�ף�����ÿ����ǰ��9�ף��������ڹ��ܵ��������ÿ϶�����Ӯ�ڹ꣬
 * ���ǣ�ÿ��10���ӻ�ͷ��һ���ڹ꣬�������Լ������ڹ꣬����·����Ϣ��ÿ����Ϣ30���ӣ����������10���ӣ����ڹ�ǳ�Ŭ����һֱ�ܣ�����Ϣ��
 * �ٶ��ڹ���������ͬһ���ͬһʱ�̿�ʼ���ܣ�����T���Ӻ��ڹ������˭�ܵÿ죿
 * �����ʽ��
 * ������һ���и�������ʱ��T�����ӣ���
 * �����ʽ��
 * ��һ������������Ľ�����ڹ�Ӯ���@_@������Ӯ���^_^��ƽ�������-_-�����1�ո������ʤ��������ľ��롣
 * ����������
 * 242
 * ���������
 * @_@ 726
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/802
 *
 */
/*#include<stdio.h>
int main() {
	int T, tortoise = 0, rabbit = 0, time = 0, flag = 1;
	scanf_s("%d", &T);
	while (flag && time < T) {
		if (time % 10 == 0 && rabbit > tortoise) {
			for (int i = 0; i < 30; i++) {
				if (time == T) {  // ������Ϣ�н�������
					flag = 0;
					break;
				}
				tortoise = tortoise + 3;
				time++;  // ���ӿ�ʼ��Ϣʱ��Ӧ�����ڹ�����3�ף�ʱ���������
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
		printf("-_- %d", rabbit);  // ƽ��ҲҪ�������
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
				if (time == T) {  // ������Ϣ�н�������
					flag = 0;
					break;
				}
				tortoise = tortoise + 3;
				time++;  // ���ӿ�ʼ��Ϣʱ��Ӧ�����ڹ�����3�ף�ʱ���������
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
		cout << "-_- " << rabbit;  // ƽ��ҲҪ�������
	return 0;
}