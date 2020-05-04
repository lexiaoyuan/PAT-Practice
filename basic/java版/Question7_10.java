package pat.basic;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * 
 * @author 徐仕成
 * 7-10 计算工资 
 * 某公司员工的工资计算方法如下：一周内工作时间不超过40小时，按正常工作时间计酬；超出40小时的工作时间部分，
 * 按正常工作时间报酬的1.5倍计酬。员工按进公司时间分为新职工和老职工，进公司不少于5年的员工为老职工，5年以下的为新职工。
 * 新职工的正常工资为30元/小时，老职工的正常工资为50元/小时。请按该计酬方式计算员工的工资。
 * 输入格式：
 * 输入在一行中给出2个正整数，分别为某员工入职年数和周工作时间，其间以空格分隔。
 * 输出格式：
 * 在一行输出该员工的周薪，精确到小数点后2位。
 * 输入样例1：
 * 5 40
 * 输出样例1：
 * 2000.00
 * 输入样例2：
 * 3 50
 * 输出样例2：
 * 1650.00
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/790
 *
 */
public class Question7_10 {

	public static void main(String[] args) {
		int age = 0,time = 0;
		float wage;
		Scanner scanner = new Scanner(System.in);
		if (scanner.hasNext()) {
			age = scanner.nextInt();
			time = scanner.nextInt();
		}
		scanner.close();
		if (age < 5) {  //新员工
			if (time <= 40)
				wage = 30 * time;
			else
				wage = (float) (30 * 40 + 30 * 1.5 * (time - 40));
		}
		else {  // 老员工
			if (time <= 40)
				wage = 50 * time;
			else
				wage = (float) (50 * 40 + 50 * 1.5 * (time - 40));
		}
		DecimalFormat decimalFormat = new DecimalFormat("#.00");
		System.out.println(decimalFormat.format(wage));

	}

}
