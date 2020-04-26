package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-12 判断奇偶性
 * 本题要求实现判断给定整数奇偶性的函数。
 * 函数接口定义：
 * int even( int n );
 * 其中n是用户传入的整型参数。当n为偶数时，函数返回1；n为奇数时返回0。注意：0是偶数。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/744
 *
 */
public class Question6_12 {

	private static int even(int n) {
		return n % 2 == 0 ? 1 : 0;
	}
	public static void main(String[] args) {
		int n = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			n = scanner.nextInt();
		}
		scanner.close();
		if (even(n) == 1)
			System.out.println(n+" is even.");
		else
			System.out.println(n+" is odd.");
	}

}
