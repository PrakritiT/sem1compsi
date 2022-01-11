import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("Guess a number between 1-1000");
		int n1 = sc.nextInt();
		int n2 = 273;
		//
		if (n1 == n2)
		{
		System.out.println("YOU SELECTED THE CORRECT NUMBER!");
		}
		else
		{
		System.out.println("you didn't guess the right number :( ");
		}
	}
}
