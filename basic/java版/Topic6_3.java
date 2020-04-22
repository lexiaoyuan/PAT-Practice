package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-3 简单求和
 * 本题要求实现一个函数，求给定的N个整数的和。
 * 函数接口定义：
 * int Sum ( int List[], int N );
 * 其中给定整数存放在数组List[]中，正整数N是数组元素个数。该函数须返回N个List[]元素的和。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/735
 */
public class Topic6_3 {
	
	private static final int MAXN = 10;
	
	private static int Sum (int [] List, int N) {
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum = sum +List[i];
		}
		return sum;
	}
	

	public static void main(String[] args) {
		int [] List = new int[MAXN];
		int N = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			N = scanner.nextInt();
			for (int i = 0; i < N; i++) {
				List[i] = scanner.nextInt();
			}
		}
		scanner.close();
		System.out.println(Sum(List, N));

	}

}
