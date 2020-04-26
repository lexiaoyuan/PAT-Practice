package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-2 多项式求值
 * 本题要求实现一个函数，计算阶数为n，系数为a[0] ... a[n]的多项式f(x)=∑i=0n(a[i]×xi) 在x点的值。
 * 函数接口定义：
 *	double f( int n, double a[], double x );
 * 其中n是多项式的阶数，a[]中存储系数，x是给定点。函数须返回多项式f(x)的值。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/734
 */
public class Question6_2 {

	private static final int MAXN = 10;
	
	private static double f(int n, double [] a, double x) {
		double sum = 0;
		double y = 1;
		for (int i = 0; i <= n; i++) {
			if( i > 0 )
				y = x*y;
			sum = sum + a[i]*y;
		}
		return sum;
	}
	
	public static void main(String[] args) {
		int n = 0;
		double [] a = new double[MAXN];  //定义数组的方式
		double x = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			n = scanner.nextInt();
			x = scanner.nextDouble();
			for (int i = 0; i <= n; i++) {
				a[i] = scanner.nextDouble();
			}
		}
		scanner.close();
		DecimalFormat decimalFormat = new DecimalFormat("#.0"); //保留小数点后一位
		System.out.println(decimalFormat.format(f(n, a, x)));
	}

}
