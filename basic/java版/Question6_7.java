package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-7 统计某类完全平方数
 * 本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。
 * 函数接口定义：
 * int IsTheNumber ( const int N );
 * 其中N是用户传入的参数。如果N满足条件，则该函数必须返回1，否则返回0。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/739
 *
 */
public class Question6_7 {

	private static int IsTheNumber(final int N) {
		if (N < 100 || ((int)Math.sqrt(N) * (int)Math.sqrt(N) - N) != 0) {
			return 0;
		}
		int [] number = new int[10];
		int n = N;  // N 不能修改，赋给n就可以修改
		int size = 0;  // 统计整数的位数
		for (int i = 0; i < 10; i++)
		{
			number[i] = n % 10;
			n = n / 10;
			size++;
			for (int j = 0; j < size; j++)
				if (i != j && number[i] == number[j])
					return 1;
			if (n == 0)
				return 0;
		}
		return 1;
	}
	public static void main(String[] args) {
		int n1, n2, cnt;
		cnt = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			n1 = scanner.nextInt();
			n2 = scanner.nextInt();
			for (int i = n1; i <= n2; i++) {
				if(IsTheNumber(i) == 1) {
					cnt++;
					System.out.println(i);
				}
			}
		}
		scanner.close();
		System.out.println(cnt);
	}

}
