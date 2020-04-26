package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-8 简单阶乘计算
 * 本题要求实现一个计算非负整数阶乘的简单函数。
 * 函数接口定义：
 * int Factorial( const int N );
 * 其中N是用户传入的参数，其值不超过12。如果N是非负整数，则该函数必须返回N的阶乘，否则返回0。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/740
 */
public class Question6_8 {

	private static int Factorial(final int N) {
		int product = 1;
		if(N>=0) {
			for (int i = 2; i <= N; i++) {
				product = product*i;
			}
			return product;
		}
		return 0;
	}
	public static void main(String[] args) {
		int N=0,NF=0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			N = scanner.nextInt();
		}
		scanner.close();
		NF = Factorial(N);
		if(NF>0)
			System.out.println(N+"!="+NF);
		else {
			System.out.println("Invalid input");
		}

	}

}
