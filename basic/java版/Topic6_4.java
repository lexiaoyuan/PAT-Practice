package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-4 求自定类型元素的平均
 * 本题要求实现一个函数，求N个集合元素S[]的平均值，其中集合元素的类型为自定义的ElementType。
 * 函数接口定义：
 * ElementType Average( ElementType S[], int N );
 * 其中给定集合元素存放在数组S[]中，正整数N是数组元素个数。该函数须返回N个S[]元素的平均值，
 * 其值也必须是ElementType类型。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/736
 */
public class Topic6_4 {
	
	private static final int MAXN = 10;
	
	private static float Average(float [] S, int N) {
		float sum = 0;
		//System.out.println(S.length);   //一直是10，不变
		for (int i = 0; i < N; i++) {
			sum = sum + S[i];
		}
		return sum/N;
	}
	

	public static void main(String[] args) {
		float [] S = new float[MAXN];
		int N = 0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			N = scanner.nextInt();
			for (int i = 0; i < N; i++) {
				S[i] = scanner.nextFloat();
			}
		}
		scanner.close();
		DecimalFormat decimalFormat = new DecimalFormat("#.00");
		System.out.println(decimalFormat.format(Average(S, N)));
	}

}
