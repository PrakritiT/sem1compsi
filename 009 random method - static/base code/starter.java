import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		//
		Random rand = new Random ();
		int num1 = rand.nextInt(10);
		System.out.println(num1);
		int num2 = rand.nextInt(100);
		System.out.println(num2+1);
		double num3 = rand.nextDouble();
		System.out.println(num3+2.5);
		int num4 = rand.nextInt(574);
		double num5 = rand.nextDouble();
		System.out.println(num4 + num5 + 14);
		int num6 = rand.nextInt(43);
		double num7 = rand.nextDouble();
		System.out.println(num6 + num7 + 12.5);
	//nextInt(25)+25;
	//nextdouble(no numbers)
	//nexdouble()+nextInt(25)+25;
	//
	}
}
