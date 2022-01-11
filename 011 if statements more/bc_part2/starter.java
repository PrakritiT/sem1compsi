import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
		Scanner sc = new Scanner (System.in);
		System.out.println("Pick a number");
		int n1 = sc.nextInt();
		//
		System.out.println("Pick another number");
		int n2 = sc.nextInt();
		//
		System.out.println("Pick one more number"); 
		int n3 = sc.nextInt();
		if (n1 > n2)
		if (n1 > n3)
		{
		System.out.println(n1 + " is the biggest number");
		}
		if (n2 > n1)
		if (n2 > n3)
		{
		System.out.println(n2 + " is the biggest number");
		}
		if (n3 > n1)
		if (n3 > n2)
		{
		System.out.println(n3 + " is the biggest number");
		}
		if (n1 < n2)
		if (n1 < n3)
		{
		System.out.println(n1 + " is the smallest number");
		}
		if (n2 < n1)
		if (n2 < n3)
		{
		System.out.println(n2 + " is the smallest number");
		}
		if (n3 < n1)
		if (n3 < n2)
		{
		System.out.println(n3 + " is the smallest number");
		}
	}
}
