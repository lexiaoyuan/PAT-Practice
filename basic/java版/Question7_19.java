package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-19 支票面额
 * 一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分。采购员用去了n分之后才发觉有错，于是清点了余额尚有2y元2f分，问该支票面额是多少？
 * 输入格式：
 * 输入在一行中给出小于100的正整数n。
 * 输出格式：
 * 在一行中按格式y.f输出该支票的原始面额。如果无解，则输出No Solution。
 * 输入样例1：
 * 23
 * 输入样例2：
 * 22
 * 输出样例2：
 * No Solution
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/799
 * 
 *
 */
public class Question7_19 {

	public static void main(String[] args) {
		int y, f, n = 0;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			n = scanner.nextInt();
		}
		scanner.close();
		for (y = 0; y < 50; y++) {
			for (f = 0; f < 100; f++) {
				if (98 * f - 199 * y - n == 0) {
					System.out.println(y+"."+f);
					return;
				}
			}
		}
		System.out.println("No Solution");
	}

}
