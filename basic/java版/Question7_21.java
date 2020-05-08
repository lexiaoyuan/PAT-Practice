package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-21 求特殊方程的正整数解
 * 本题要求对任意给定的正整数N，求方程X^2+Y^2=N的全部正整数解。
 * 输入格式：
 * 输入在一行中给出正整数N（≤10000）。
 * 输出格式：
 * 输出方程X^2+Y^2=N的全部正整数解，其中X≤Y。每组解占1行，两数字间以1空格分隔，按X的递增顺序输出。如果没有解，则输出No Solution。
 * 输入样例1：
 * 884
 * 输出样例1：
 * 10 28
 * 20 22
 * 输入样例2：
 * 11
 * 输出样例2：
 * No Solution
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/801
 *
 */
public class Question7_21 {

	public static void main(String[] args) {
		int N = 0;
		boolean flag = true;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			N = scanner.nextInt();
		}
		scanner.close();
		for (int x = 1; x <= 100; x++) {  // 正整数解，x,y都要大于0
			for (int y = 1; y <= 100; y++) {
				if (x <= y && x * x + y * y - N == 0) {
					System.out.println(x+" "+y);
					flag = false;
				}
			}
		}
		if (flag)
			System.out.println("No Solution");

	}

}
