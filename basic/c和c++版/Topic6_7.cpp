/**
 *
 * @author ���˳�
 * 6-7 ͳ��ĳ����ȫƽ����
 * ����Ҫ��ʵ��һ���������ж���һ��������N�Ƿ�����������������ȫƽ����������������λ������ͬ����144��676�ȡ�
 * �����ӿڶ��壺
 * int IsTheNumber ( const int N );
 * ����N���û�����Ĳ��������N������������ú������뷵��1�����򷵻�0��
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/739
 *
 */
/*#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
	int n1, n2, i, cnt;

	scanf_s("%d %d", &n1, &n2);
	cnt = 0;
	for (i = n1; i <= n2; i++) {
		if (IsTheNumber(i)) {
			cnt++;
			printf("i=%d\n", i);
		}
			
	}
	printf("cnt = %d\n", cnt);

	return 0;
}
int IsTheNumber(const int N) {
	if (N < 100 || ((int)sqrt(N) * (int)sqrt(N) - N) != 0) {
		return 0;
	}
	int number[10];
	int n=N;
	int size=0;
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		n = n / 10;
		size++;
		for (int j = 0; j < size; j++)
			if (i != j && number[i] == number[j]) 
				return 1;
		if (n == 0)
			return 0;
	}
	return 1;
}
*/
#include<iostream>
#include<math.h>
using namespace std;
int IsTheNumber(const int N);
int main() {
	int n1, n2, cnt;
	cin >> n1 >> n2;
	cnt = 0;
	for (int i = n1; i <= n2; i++)
	{
		if (IsTheNumber(i)) {
			cnt++;
			cout << i << endl;
		}
	}
	cout << cnt;
	return 0;
}
int IsTheNumber(const int N) {
	if (N < 100 || ((int)sqrt(N) * (int)sqrt(N) - N) != 0) {
		return 0;
	}
	int number[10];
	int n = N;  // N �����޸ģ�����n�Ϳ����޸�
	int size = 0;  // ͳ��������λ��
	for (int i = 0; i < 10; i++)
	{
		number[i] = n % 10;
		n = n / 10;
		size++;
		for (int j = 0; j < size; j++)
			if (i != j && number[i] == number[j])
				return 1;
		if (n == 0)
			return 0;
	}
	return 1;
}