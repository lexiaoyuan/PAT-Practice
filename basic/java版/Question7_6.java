package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-6 混合类型数据格式化输入
 * 本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出。
 * 输入格式：
 * 输入在一行中顺序给出浮点数1、整数、字符、浮点数2，其间以1个空格分隔。
 * 输出格式：
 * 在一行中按照字符、整数、浮点数1、浮点数2的顺序输出，其中浮点数保留小数点后2位。
 * 输入样例：
 * 2.12 88 c 4.7
 * 输出样例：
 * c 88 2.12 4.70
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/786
 *
 */
public class Question7_6 {

	public static void main(String[] args) {
		float f1 = 0f, f2 = 0f;
		int i = 0;
		char c = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			f1 = scanner.nextFloat();
			i = scanner.nextInt();
			c = scanner.next().charAt(0);   // 调用String的charAt(0)方法获取第一个字符
			f2 = scanner.nextFloat();
		}
		scanner.close();
		System.out.print(c+" "+i+" ");
		DecimalFormat decimalFormat = new DecimalFormat("#.00");
		System.out.println(decimalFormat.format(f1)+" "+decimalFormat.format(f2));

	}

}
