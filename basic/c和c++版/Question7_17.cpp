/**
 *
 * @author ���˳�
 * 7-17 ���������
 * һ����泤1�磬��һ����ΪN��ľ��ĵײ�����֪���ÿ1���ӿ���������U�磬��������Ϣ1���Ӳ��ܽ���������������Ϣ�Ĺ����У�������»���D�硣
 * ���������������»��ظ����С����ʣ������Ҫ�೤ʱ�����������������Ҫ����1���Ӱ�1���Ӽƣ����Ҽٶ�ֻҪ��ĳ����������������ͷ�������˾��Ķ�����
 * ��ô������������ˡ���ʼʱ�������ſ�ھ��׵ģ����߶�Ϊ0����
 * �����ʽ��
 * ������һ����˳�����3��������N��U��D������D<U��N������100��
 * �����ʽ��
 * ��һ������������������ʱ�䣬�Է���Ϊ��λ��
 * ����������
 * 12 3 1
 * ���������
 * 11
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/797
 *
 */
/*#include<stdio.h>
int main() {
	int n, u, d, time = 0, position = 0;
	scanf_s("%d %d %d", &n, &u, &d);
	while (1)
	{
		if (n - position > u)  // ʣ�µľ�����Ҫ����һ���ӵ�ʱ����
		{
			// time++;
			// position += u;
			// time++;
			// position -= d;
			time += 2;
			position = position + u - d;
		}
		else {  // ʣ�µľ��벻��һ������
			time++;
			break;
		}
	}
	printf("%d", time);
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int n, u, d, time = 0, position = 0;
	cin >> n >> u >> d;
	while (1)
	{
		if (n - position > u)  // ʣ�µľ�����Ҫ����һ���ӵ�ʱ����
		{
			// time++;
			// position += u;
			// time++;
			// position -= d;
			time += 2;
			position = position + u - d;
		}
		else {  // ʣ�µľ��벻��һ������
			time++;
			break;
		}
	}
	cout << time;
	return 0;
}