package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-16 求符合给定条件的整数集
 * 给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
 * 输入格式：
 * 输入在一行中给出A。
 * 输出格式：
 * 输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
 * 输入样例：
 * 2
 * 输出样例：
 * 234 235 243 245 253 254
 * 324 325 342 345 352 354
 * 423 425 432 435 452 453
 * 523 524 532 534 542 543
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/796
 *
 */
public class Question7_16 {

	public static void main(String[] args) {
		int a = 0;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			a = scanner.nextInt();
		}
		scanner.close();
		int [] number = { a, a + 1, a + 2, a + 3 };
		int row = 0, col = 0;  //统计行数和列数，控制行后面的换行和列后面的空格
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (j != i) {
					for (int k = 0; k < 4; k++) {
						if (k != i && k != j) {
							/*System.out.print(number[i]);
							System.out.print(number[j]);
							System.out.print(number[k]);*/
							// 采用一行输出则需要先转成字符串类型
							System.out.print(Integer.toString(number[i])+Integer.toString(number[j])+Integer.toString(number[k]));
							col++;
							if (col < 6)
								System.out.print(" ");
						}
					}
				}
			}
			row++;
			if (row < 4)
				System.out.println();
			col = 0;
		}

	}

}
