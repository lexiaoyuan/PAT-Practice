package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-15 计算圆周率
 * 根据下面关系式，求圆周率的值，直到最后一项的值小于给定阈值。
 * 【见题目地址】
 * 输入格式：
 * 输入在一行中给出小于1的阈值。
 * 输出格式：
 * 在一行中输出满足阈值条件的近似圆周率，输出到小数点后6位。
 * 输入样例：
 * 0.01
 * 输出样例：
 * 3.132157
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/795
 * 
 */
public class Question7_15 {

	public static void main(String[] args) {
		float threshold = 0, pi = 1, end = 1;
		double numerator = 1, denominator = 1;  //分子,分母  长整型会溢出
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			threshold = scanner.nextFloat();
		}
		scanner.close();
		for (int i = 1; end >= threshold; i++)
		{
			numerator = numerator * i;
			denominator = denominator * (2 * i + 1);
			end = (float) (numerator / (denominator * 1.0));
			pi = pi + end;
		}
		DecimalFormat decimalFormat = new DecimalFormat("#.000000");
		System.out.println(decimalFormat.format(pi*2));

	}

}
