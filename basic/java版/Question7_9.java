package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-9 用天平找小球
 * 三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。
 * 输入格式：
 * 输入在一行中给出3个正整数，顺序对应球A、B、C的重量。
 * 输出格式：
 * 在一行中输出唯一的那个不一样的球。
 * 输入样例：
 * 1 1 2
 * 输出样例：
 * C
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/789
 *
 */
public class Question7_9 {

	public static void main(String[] args) {
		int a = 0,b = 0,c = 0;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			a = scanner.nextInt();
			b = scanner.nextInt();
			c = scanner.nextInt();
		}
		scanner.close();
		
		if (a == b) {
			System.out.println("C");
		}
		if (a == c) {
			System.out.println("B");
		}
		if (b == c) {
			System.out.println("A");
		}

	}

}
