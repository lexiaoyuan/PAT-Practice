/**
 *
 * @author ���˳�
 * 6-8 �򵥽׳˼���
 * ����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺�����
 * �����ӿڶ��壺
 * int Factorial( const int N );
 * ����N���û�����Ĳ�������ֵ������12�����N�ǷǸ���������ú������뷵��N�Ľ׳ˣ����򷵻�0��
 *
 *����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/740
 */
/*
#include <stdio.h>

int Factorial(const int N);

int main()
{
	int N, NF;

	scanf_s("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}
int Factorial(const int N) {
	int product = 1;
	if (N >= 0) {
		for (int i = 2; i <= N; i++)
			product = product * i;
		return product;
	}
	return 0;
}
*/
#include<iostream>
using namespace std;
int Factorial(const int N);
int main() {
	int N, NF;

	cin >> N;
	NF = Factorial(N);
	if (NF)  cout << N<<"! = " << NF<<endl;
	else cout << "Invalid input"<<endl;
	return 0;
}
int Factorial(const int N) {
	int product = 1;
	if (N >= 0) {
		for (int i = 2; i <= N; i++)
			product = product * i;
		return product;
	}
	return 0;
}