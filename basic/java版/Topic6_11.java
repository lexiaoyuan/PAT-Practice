package pat.basic;

import java.io.InputStream;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-11 求自定类型元素序列的中位数
 * 本题要求实现一个函数，求N个集合元素A[]的中位数，即序列中第⌊(N+1)/2⌋大的元素。
 * 其中集合元素的类型为自定义的ElementType。
 * 函数接口定义：
 * ElementType Median( ElementType A[], int N );
 * 其中给定集合元素存放在数组A[]中，正整数N是数组元素个数。该函数须返回N个A[]元素的中位数，其值也必须是ElementType类型。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/743
 *
 */
public class Topic6_11 {

	private static final int MAXN = 1000;
	
	private static float Median(float []A, int N) {
		Arrays.sort(A, 0, N);  //0包括，N不包括
		for (int i = 0; i < N; i++) {
			System.out.print(A[i]+" ");
		}
		System.out.println();
		return A[N/2];
	}
	
	public static void main(String[] args) {
		int N = 0;
		float [] A = new float[MAXN];
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			N = scanner.nextInt();
			for (int i = 0; i < N; i++) {
				A[i] = scanner.nextFloat();
			}
		}
		scanner.close();
		DecimalFormat decimalFormat = new DecimalFormat("#.00");
		System.out.println(decimalFormat.format(Median(A, N)));
	}
}
