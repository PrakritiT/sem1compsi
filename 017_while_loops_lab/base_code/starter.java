import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here

	Scanner sc = new Scanner (System.in);
	System.out.println("What is your name?");
	String name = sc.nextLine();
 	//
	System.out.println("How many times would you like me to write your name?");
	int many = sc.nextInt();

	int x = 0;
	while(true)
	{
		System.out.println(name);
		if(x == many)
	{
		break;
	}
		x = x+1;
	}
	}
}