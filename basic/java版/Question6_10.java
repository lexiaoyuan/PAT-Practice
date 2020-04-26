package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-10 阶乘计算升级版
 * 本题要求实现一个打印非负整数阶乘的函数。
 * 函数接口定义：
 * void Print_Factorial ( const int N );
 * 其中N是用户传入的参数，其值不超过1000。如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。
 * 
 * 【题目网址】：https://pintia.cn/problem-sets/14/problems/742
 *
 */
public class Question6_10 {

	private static void Print_Factorial(final int N) {
		
		if(N<0) {
			System.out.println("Invalid input");
		} else {
			int [] number = new int[3000];  // 已默认初始化全为0
			int product, carry;   //乘积，进位
			int i;
			int size = 1;  //记录数组中的元素个数
			number[0] = 1;  //第0位置为1
			boolean flag = true;
			for (int value = 2; value <= N; value++) { // 计算阶乘
				for (i = 0; i < size; i++) {  // 遍历数组
					// ---核心算法：计算乘积和进位并存入数组 ---
					carry = 0; //进位只加一次，用完后要归0
					flag = true; //循环标志，方便随时跳出循环
					while(flag) {
						product = number[i]*value + carry; // 每次计算乘积要加上前一次的进位
						number[i] = product%10;
						if(product>=10) {   //大于等于10要计算进位
							carry = product/10;
							i++;
							flag = true;
						} else {
							flag = false;
						}
					}
				}
				size = i; //i就可以反映当前存了多少位数
			}
			System.out.println("size="+size);
			for (i = size-1; i >= 0; i--) {
				System.out.print(number[i]);
			}
		}
	}
	public static void main(String[] args) {
		int N = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			N = scanner.nextInt();
		}
		scanner.close();
		Print_Factorial(N);
	}

}
