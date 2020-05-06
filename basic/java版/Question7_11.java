package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-11 分段计算居民水费
 * 为鼓励居民节约用水，自来水公司采取按用水量阶梯式计价的办法，居民应交水费y（元）与月用水量x（吨）相关：当x不超过15吨时，y=4x/3；
 * 超过后，y=2.5x−17.5。请编写程序实现水费的计算。
 * 输入格式：
 * 输入在一行中给出非负实数x。
 * 输出格式：
 * 在一行输出应交的水费，精确到小数点后2位。
 * 输入样例1：
 * 12
 * 输出样例1：
 * 16.00
 * 输入样例2：
 * 16
 * 输出样例2：
 * 22.50
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/791
 *
 */
public class Question7_11 {

	public static void main(String[] args) {
		int x = 0;
		float y=0;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			x =scanner.nextInt();
		}
		scanner.close();
		if (x<=15) {
			y = (float) (4*x/3.0);
		}else {
			y = (float) (2.5*x-17.5);
		}
		DecimalFormat decimalFormat = new DecimalFormat("0.00");
		System.out.println(decimalFormat.format(y));

	}

}
