/**
 *
 * @author ���˳�
 * 7-16 ����ϸ���������������
 * ����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ����
 * �����ʽ��
 * ������һ���и���A��
 * �����ʽ��
 * ������������ĵ�3λ����Ҫ���С����ÿ��6���������������Կո�ָ�������ĩ�����ж���ո�
 * ����������
 * 2
 * ���������
 * 234 235 243 245 253 254
 * 324 325 342 345 352 354
 * 423 425 432 435 452 453
 * 523 524 532 534 542 543
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/796
 *
 */
/*#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int number[4] = {a, a+1, a+2, a+3};
	int row = 0, col = 0;  //ͳ�������������������к���Ļ��к��к���Ŀո�
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
	int row = 0, col = 0;  //ͳ�������������������к���Ļ��к��к���Ŀո�
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