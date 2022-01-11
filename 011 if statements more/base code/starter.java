import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.int to = 2;
		//
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Pick a number");
		int n1 = sc.nextInt();
		//
		System.out.println("Pick another number");
		int n2 = sc.nextInt();
		//
		if (n1 != n2)
		{
		System.out.println("You have selected two different numbers.");
		}
	}
}

