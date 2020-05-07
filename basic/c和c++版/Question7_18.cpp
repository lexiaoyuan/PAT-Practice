/**
 *
 * @author ���˳�
 * 7-18 ���ַ������ʽ����
 * ���ַ���������ԭ��Ϊ�������������f(x)������[a,b]�������˵�ȡֵ��ţ���f(a)f(b)<0��������������������ٴ���1����r����f(r)=0��
 * ���ַ��Ĳ���Ϊ��
 * ������䳤�ȣ����С�ڸ�����ֵ����ֹͣ����������е�(a+b)/2������
 * ���f(a)f(b)<0��������е��ֵf((a+b)/2)��
 * ���f((a+b)/2)����Ϊ0����(a+b)/2����Ҫ��ĸ�������
 * ���f((a+b)/2)��f(a)ͬ�ţ���˵����������[(a+b)/2,b]����a=(a+b)/2���ظ�ѭ����
 * ���f((a+b)/2)��f(b)ͬ�ţ���˵����������[a,(a+b)/2]����b=(a+b)/2���ظ�ѭ����
 * ����ĿҪ���д���򣬼������3�׶���ʽf(x)=������Ŀ��ַ���ڸ�������[a,b]�ڵĸ���
 * �����ʽ��
 * �����ڵ�1����˳���������ʽ��4��ϵ��������Ŀ��ַ���ڵ�2����˳���������˵�a��b����Ŀ��֤����ʽ�ڸ��������ڴ���Ψһ������
 * �����ʽ��
 * ��һ��������ö���ʽ�ڸ������ڵĸ�����ȷ��С�����2λ��
 * ����������
 * 3 -1 -3 1
 * -0.5 0.5
 * ���������
 * 0.33
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/798
 *
 */
/*#include<stdio.h>
int main() {
	float a0, a1, a2, a3, a, b;
	double f, fa, fb;
	scanf_s("%f %f %f %f", &a3, &a2, &a1, &a0);
	scanf_s("%f %f", &a, &b);
	// ��ֵȡ0.01
	while ((b - a) >= 0.01) {
		fa = a3 * a * a * a + a2 * a * a + a1 * a + a0;
		fb = a3 * b * b * b + a2 * b * b + a1 * b + a0;
		if (fa == 0)  // ����˵��Ǹ�
		{
			printf("%.2f", a);
			return 0;
		}
		if (fb == 0)
		{
			printf("%.2f", b);
			return 0;
		}
		if (fa * fb < 0)
		{
			f = a3 * ((a + b) / 2.0) * ((a + b) / 2.0) * ((a + b) / 2.0) + a2 * ((a + b) / 2.0) * ((a + b) / 2.0) + a1 * ((a + b) / 2.0) + a0;
			if (f == 0)
				break;
			else if (f * fa > 0) 
				a = (a + b) / 2.0;
			else if (f * fb > 0) 
				b = (a + b) / 2.0;
		}
	}
	printf("%.2f", (a + b) / 2.0);
	return 0;
}*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a0, a1, a2, a3, a, b;
	double f, fa, fb;
	cin >> a3 >> a2 >> a1 >> a0;
	cin >> a >> b;
	// ��ֵȡ0.01
	while ((b - a) >= 0.01) {
		fa = a3 * a * a * a + a2 * a * a + a1 * a + a0;
		fb = a3 * b * b * b + a2 * b * b + a1 * b + a0;
		if (fa == 0)  // ����˵��Ǹ�
		{
			cout << fixed << setprecision(2) << a;
			return 0;
		}
		if (fb == 0)
		{
			cout << fixed << setprecision(2) << b;
			return 0;
		}
		if (fa * fb < 0)
		{
			f = a3 * ((a + b) / 2.0) * ((a + b) / 2.0) * ((a + b) / 2.0) + a2 * ((a + b) / 2.0) * ((a + b) / 2.0) + a1 * ((a + b) / 2.0) + a0;
			if (f == 0)
				break;
			else if (f * fa > 0)
				a = (a + b) / 2.0;
			else if (f * fb > 0)
				b = (a + b) / 2.0;
		}
	}
	cout << fixed << setprecision(2) << (a + b) / 2.0;
	return 0;
}