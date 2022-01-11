import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	//
		Scanner sc = new Scanner (System.in);
		//
		System.out.println("What is your first name?");
		String name = sc.nextLine();
		//
		System.out.println("How old are you? (number)");
		int age = sc.nextInt();
		//
		System.out.println("What month were you born? (number)");
		int month = sc.nextInt();
		//
		System.out.println("What date of the month were you born? (number) ");
		int date = sc.nextInt();
		//
		System.out.println("What year were you born (number)");
		int year = sc.nextInt();
		//
		System.out.println("How much is a buck Fifty (_._)");
		double doller= sc.nextDouble();
		//
		System.out.println("Your name is " + name + ".");
		System.out.println("You are " + age + " old.");
		System.out.println("You were born on " + month + "/ " + date + "/ " + year +".");
		System.out.println("A buck fifty is " + doller + ".");
	}
}
