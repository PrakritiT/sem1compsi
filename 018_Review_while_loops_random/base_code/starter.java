import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner (System.in);
	int sec = 756;
	System.out.println("Pick a whole number between 1 - 1000");
	int guess = sc.nextInt();
	//
	int x = 0;
	while(guess != sec)
	{
		System.out.println("Pick a different number between 1-1000:  ");
		guess = sc.nextInt();
		//
		if(guess == sec)
		{
			break;
		}
		x = x+1;
	}
	System.out.print("Yaa you selected the correct number!");
	}
}
