package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-5 求自定类型元素的最大值
 * 本题要求实现一个函数，求N个集合元素S[]中的最大值，其中集合元素的类型为自定义的ElementType。
 * 函数接口定义：
 * ElementType Max( ElementType S[], int N );
 * 其中给定集合元素存放在数组S[]中，正整数N是数组元素个数。
 * 该函数须返回N个S[]元素中的最大值，其值也必须是ElementType类型。
 *
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/737
 */
public class Topic6_5 {

	private static final int MAXN = 10;
	
	private static float Max(float []S, int N) {
		float max = S[0];
		for (int i = 1; i < N; i++) {
			if(max < S[i])
				max = S[i];
		}
		return max;
	}
	
	public static void main(String[] args) {
		int N =0;
		float [] S = new float[MAXN];
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			N = scanner.nextInt();
			for (int i = 0; i < N; i++) {
				S[i] = scanner.nextFloat();
			}
		}
		scanner.close();
		DecimalFormat decimalFormat = new DecimalFormat("#.00");
		System.out.println(decimalFormat.format(Max(S, N)));
	}

}
