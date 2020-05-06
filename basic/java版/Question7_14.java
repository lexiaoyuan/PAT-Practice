package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-14 求整数段和
 * 给定两个整数A和B，输出从A到B的所有整数以及这些数的和。
 * 输入格式：
 * 输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。
 * 输出格式：
 * 首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。
 * 输入样例：
 * -3 8
 * 输出样例：
 * -3   -2   -1    0    1
 *  2    3    4    5    6
 *  7    8
 * Sum = 30
 * 
 * 【题目地址】： https://pintia.cn/problem-sets/14/problems/794
 *
 */
public class Question7_14 {

	public static void main(String[] args) {
		int a = 0, b = 0, sum = 0, count = 1;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			a = scanner.nextInt();
			b = scanner.nextInt();
		}
		scanner.close();
		for (int i = a; i <= b; i++, count++)
		{
			/**
			 * String.format()：
			 * 可对整数进行格式化：%[index$][标识][最小宽度]转换方式
			 * %[index$]：以%index$开头，index从1开始取值，表示将第index个参数拿进来进行格式化
			 * [标识]：' ' 正值前加空格，负值前加负号
			 * [最小宽度]：最终该整数转化的字符串最少包含多少位数字
			 * 转换方式：d-十进制 o-八进制 x或X-十六进制
			 */
			System.out.print(String.format("%1$ 5d", i));  
			if (count % 5 == 0)
				System.out.println();
			sum = sum + i;
		}
		if ((count - 1) % 5 == 0)  // 避免多换行一次
			System.out.print("Sum = "+sum);
		else
			System.out.print("\nSum = "+sum);;

	}

}
