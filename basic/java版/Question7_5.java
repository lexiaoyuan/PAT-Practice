package pat.basic;
/**
 * 
 * @author 徐仕成
 * 7-5 表格输出
 * 本题要求编写程序，按照规定格式输出表格。
 * 输入格式：
 * 本题目没有输入。
 * 输出格式：
 * 要求严格按照给出的格式输出下列表格：
 * ------------------------------------
 * Province      Area(km2)   Pop.(10K)
 * ------------------------------------
 * Anhui         139600.00   6461.00
 * Beijing        16410.54   1180.70
 * Chongqing      82400.00   3144.23
 * Shanghai        6340.50   1360.26
 * Zhejiang      101800.00   4894.00
 * ------------------------------------
 * 
 * 【题目地址】：https://pintia.cn/problem-sets/14/problems/785
 *
 */
public class Question7_5 {

	public static void main(String[] args) {
		System.out.println("------------------------------------");
		System.out.println("Province      Area(km2)   Pop.(10K)");
		System.out.println("------------------------------------");
		
		String [] province = {"Anhui", "Beijing", "Chongqing", "Shanghai", "Zhejiang"};
		float [] area = {139600.00f, 16410.54f, 82400.00f, 6340.50f, 101800.00f};
		float [] pop = {6461.00f ,1180.70f ,3144.23f ,1360.26f ,4894.00f};	
		for (int i = 0; i < 5; i++) 
			System.out.printf("%-11s %11.2f %9.2f\n", province[i], area[i], pop[i]);  // 支持c语言风格的输出
		/*
		 * System.out.println("Anhui         139600.00   6461.00");
		 * System.out.println("Beijing        16410.54   1180.70");
		 * System.out.println("Chongqing      82400.00   3144.23");
		 * System.out.println("Shanghai        6340.50   1360.26");
		 * System.out.println("Zhejiang      101800.00   4894.00");
		 */
		System.out.println("------------------------------------");
	}

}
