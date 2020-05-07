package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-18 二分法求多项式单根
 * 二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。
 * 二分法的步骤为：
 * 检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2；否则
 * 如果f(a)f(b)<0，则计算中点的值f((a+b)/2)；
 * 如果f((a+b)/2)正好为0，则(a+b)/2就是要求的根；否则
 * 如果f((a+b)/2)与f(a)同号，则说明根在区间[(a+b)/2,b]，令a=(a+b)/2，重复循环；
 * 如果f((a+b)/2)与f(b)同号，则说明根在区间[a,(a+b)/2]，令b=(a+b)/2，重复循环。
 * 本题目要求编写程序，计算给定3阶多项式f(x)=【见题目地址】在给定区间[a,b]内的根。
 * 输入格式：
 * 输入在第1行中顺序给出多项式的4个系数【见题目地址】在第2行中顺序给出区间端点a和b。题目保证多项式在给定区间内存在唯一单根。
 * 输出格式：
 * 在一行中输出该多项式在该区间内的根，精确到小数点后2位。
 * 输入样例：
 * 3 -1 -3 1
 * -0.5 0.5
 * 输出样例：
 * 0.33
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/798
 *
 */
public class Question7_18 {

	public static void main(String[] args) {
		float a0 = 0, a1 = 0, a2 = 0, a3 = 0, a = 0, b = 0;
		double f, fa, fb;
		DecimalFormat decimalFormat = new DecimalFormat("0.00");
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			a3 = scanner.nextFloat();
			a2 = scanner.nextFloat();
			a1 = scanner.nextFloat();
			a0 = scanner.nextFloat();
			a = scanner.nextFloat();
			b = scanner.nextFloat();
		}
		scanner.close();
		// 阈值取0.01
		while ((b - a) >= 0.01) {
			fa = a3 * a * a * a + a2 * a * a + a1 * a + a0;
			fb = a3 * b * b * b + a2 * b * b + a1 * b + a0;
			if (fa == 0)  // 区间端点是根
			{
				System.out.println(decimalFormat.format(a));
				return;
			}
			if (fb == 0)
			{
				System.out.println(decimalFormat.format(b));
				return;
			}
			if (fa * fb < 0)
			{
				f = a3 * ((a + b) / 2.0) * ((a + b) / 2.0) * ((a + b) / 2.0) + a2 * ((a + b) / 2.0) * ((a + b) / 2.0) + a1 * ((a + b) / 2.0) + a0;
				if (f == 0)
					break;
				else if (f * fa > 0)
					a = (float) ((a + b) / 2.0);
				else if (f * fb > 0)
					b = (float) ((a + b) / 2.0);
			}
		}
		System.out.println(decimalFormat.format((a + b) / 2.0));
	}

}
