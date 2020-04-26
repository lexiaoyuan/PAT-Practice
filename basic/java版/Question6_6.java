package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 6-6 求单链表结点的阶乘和
 * 本题要求实现一个函数，求单链表L结点的阶乘和。这里默认所有结点的值非负，且题目保证结果在int范围内。
 * 函数接口定义：
 * int FactorialSum( List L ); 
 * 其中单链表List的定义如下：
 * typedef struct Node *PtrToNode;
 * struct Node {
 *	  int Data; /* 存储结点数据
 *	  PtrToNode Next; /* 指向下一个结点的指针
 * };
 * typedef PtrToNode List; /* 定义单链表类型
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/738
 *
 */
public class Question6_6 {
	
	private static class Node {
		int Data;
		Node Next;
	}
	
	private static int FactorialSum(Node L) {
		int sum = 0;
		int product;
		while(L!=null) {
			product = 1;
			for (int i = 2; i <= L.Data; i++) {
				product = product * i;
			}
			sum = sum +product;
			L = L.Next;
		}
		return sum;
	}

	public static void main(String[] args) {
		int n;
		Node L= null;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) {
			n = scanner.nextInt();
			for (int i = 0; i < n; i++) {
				Node p = new Node();
				p.Data = scanner.nextInt();
				p.Next = L;
				L = p;
			}
		}
		scanner.close();
		System.out.println(FactorialSum(L));

	}

}
