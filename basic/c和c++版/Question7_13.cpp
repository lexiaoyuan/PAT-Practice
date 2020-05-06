/**
 *
 * @author ���˳�
 * 7-13 ��K����ͼ
 * ��Ʊ�۸��ǵ����ƣ���������ͼ�����е�K��ͼ����ʾ����Ϊ���յ���K�ߡ����ܵ���K�ߡ����µ���K�ߵȡ�����K��Ϊ����ÿ���Ʊ�۸�ӿ��̵���������һ�죬
 * ��Ӧһ������Сͼ��Ҫ��ʾ�ĸ��۸񣺿��̼۸�Open�����ϸոտ�ʼ���������ɽ��ĵ�1�ʼ۸񣩡����̼۸�Close����������ʱ���һ�ʳɽ��ļ۸񣩡�
 * �м����߼�High����ͼ�Low�����Close<Open����ʾΪ��BW-Solid��������ʵ���������򡱣������Close>Open����ʾΪ��R-Hollow��
 * ���������ĺ����򡱣������Open����Close����Ϊ��R-Cross��������ʮ�ֺ����򡱣������Low��Open��Close�ͣ���Ϊ��Lower Shadow��
 * ����������Ӱ�ߡ��������High��Open��Close�ߣ���Ϊ��Upper Shadow������������Ӱ�ߡ����������򣬸��ݸ������ĸ��۸���ϣ��жϵ��յ�����
 * ��һ��ʲô��������
 * �����ʽ��
 * ������һ���и���4����ʵ�����ֱ��ӦOpen��High��Low��Close������Կո�ָ���
 * �����ʽ��
 * ��һ���������K��������͡�������ϡ���Ӱ�ߣ��������ͺ����with Ӱ�����͡��������Ӱ�߶��У������with Lower Shadow and
 * Upper Shadow��
 * ��������1��
 * 5.110 5.250 5.100 5.105
 * �������1��
 * BW-Solid with Lower Shadow and Upper Shadow
 * ��������2��
 * 5.110 5.110 5.110 5.110
 * �������2��
 * R-Cross
 * ��������3��
 * 5.110 5.125 5.112 5.126
 * �������3��
 * R-Hollow
 *
 * ����Ŀ��ַ����https://pintia.cn/problem-sets/14/problems/793
 *
 */
/*#include<stdio.h>
int main() {
	float open, high, low, close;
	scanf_s("%f %f %f %f", &open, &high, &low, &close);
	if (close < open)
		printf("BW-Solid");
	else if (close > open)
		printf("R-Hollow");
	else
		printf("R-Cross");
	if (low < open && low < close && high > open && high > close)
		printf(" with Lower Shadow and Upper Shadow");
	else if (low < open && low < close)
		printf(" with Lower Shadow");
	else if (high > open && high > close)
		printf(" with Upper Shadow");
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	float open, high, low, close;
	cin >> open >> high >> low >> close;
	if (close < open)
		cout << "BW-Solid";
	else if (close > open)
		cout << "R-Hollow";
	else
		cout<< "R-Cross";
	if (low < open && low < close && high > open&& high > close)
		cout << " with Lower Shadow and Upper Shadow";
	else if (low < open && low < close)
		cout << " with Lower Shadow";
	else if (high > open&& high > close)
		cout << " with Upper Shadow";
	return 0;
}