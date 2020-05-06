package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-12 两个数的简单计算器
 * 本题要求编写一个简单计算器程序，可根据输入的运算符，对2个整数进行加、减、乘、除或求余运算。题目保证输入和输出均不超过整型范围。
 * 输入格式：
 * 输入在一行中依次输入操作数1、运算符、操作数2，其间以1个空格分隔。操作数的数据类型为整型，且保证除法和求余的分母非零。
 * 输出格式：
 * 当运算符为+、-、*、/、%时，在一行输出相应的运算结果。若输入是非法符号（即除了加、减、乘、除和求余五种运算符以外的其他符号）则输出ERROR。
 * 输入样例1：
 * -7 / 2
 * 输出样例1：
 * -3
 * 输入样例2：
 * 3 & 6
 * 输出样例2：
 * ERROR
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/792
 *
 */
public class Question7_12 {

	public static void main(String[] args) {
		int operand1 = 0, operand2 = 0;
		char operatorC = 0;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			operand1 = scanner.nextInt();
			operatorC = scanner.next().charAt(0);
			operand2 = scanner.nextInt();
		}
		scanner.close();
		if (operatorC == '+')
			System.out.println(operand1 + operand2);
		else if (operatorC == '-')
			System.out.println(operand1 - operand2);
		else if (operatorC == '*')
			System.out.println(operand1 * operand2);
		else if (operatorC == '/')
			System.out.println(operand1 / operand2);
		else if (operatorC == '%')
			System.out.println(operand1 % operand2);
		else
			System.out.println("ERROR");

	}

}
