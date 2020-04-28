package pat.basic;

import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-1 厘米换算英尺英寸 
 * 如果已知英制长度的英尺foot和英寸inch的值，那么对应的米是(foot+inch/12)×0.3048。
 * 现在，如果用户输入的是厘米数，那么对应英制长度的英尺和英寸是多少呢？别忘了1英尺等于12英寸。
 * 输入格式：
 * 输入在一行中给出1个正整数，单位是厘米。
 * 输出格式：
 * 在一行中输出这个厘米数对应英制长度的英尺和英寸的整数值，中间用空格分开。
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/781
 *
 */
public class Question7_1 {
    private static void conversion(int cm) {
    	int foot, inch;
    	double m;
    	m = ((cm / 100.0) / 0.3048);
    	foot = (int)m;
    	inch = (int)((m-foot)*100);
    	if( inch % 10 >= 5)
    		inch = (int) ((m - foot) * 10 + 1);
    	else 
    		inch = (int) (m - foot) * 10;
		System.out.println(foot+" "+inch);
    }
	public static void main(String[] args) {
		int cm=0;
		Scanner scanner = new Scanner(System.in);
		if(scanner.hasNext()) 
			cm = scanner.nextInt();
		scanner.close();
		conversion(cm);
	}

}

