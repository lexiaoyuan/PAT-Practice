package pat.basic;

import java.util.Arrays;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-13 折半查找
 * 给一个严格递增数列，函数int Search_Bin(SSTable T, KeyType k)用来二分地查找k在数列中的位置。
 * 函数接口定义：
 * int  Search_Bin(SSTable T, KeyType k)
 * 其中T是有序表，k是查找的值。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/44932
 *
 */
public class Question6_13 {

	private static final int MAXN = 50;
	
	public static void main(String[] args) {
		int length=0,k=0;
		int [] T = new int[MAXN];
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			length = scanner.nextInt();
			for (int i = 1; i <= length; i++) {
				T[i] = scanner.nextInt();
			}
			k = scanner.nextInt();
		}
		scanner.close();
		
		int binarySearch = Arrays.binarySearch(T, 1, length+1,  k);
		if(binarySearch>0)
			System.out.println(binarySearch);
		else 
			System.out.println("NOT FOUND");
	}

}
