package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-3 逆序的三位数
 * 程序每次读入一个正3位数，然后输出按位逆序的数字。
 * 注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
 * 输入格式：
 * 每个测试是一个3位的正整数。
 * 输出格式：
 * 输出按位逆序的数。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/783
 *
 */
public class Question7_3 {

	public static void main(String[] args) {
		int number = 0;
		int [] array = new int[3];
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			number = scanner.nextInt();
		}
		scanner.close();
		for (int i = 0; i < array.length; i++) {
			array[i] = number%10;
			number = number/10;
		}
		for (int j = 0; j < array.length; j++) {
			if (array[j]!=0 || (array[1]==0 && array[0]!=0)) {
				System.out.print(array[j]);
			}
		}
	}

}
