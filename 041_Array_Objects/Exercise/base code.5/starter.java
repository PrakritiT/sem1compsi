import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
		// factorial

	Scanner sc = new Scanner (System.in);
	System.out.println("pick an int");
	int x = sc.nextInt();
	int ans = x-1;

	while(true)
	{
	System.out.println(x);
	x = x * ans;
	if(ans == 0)
	{
	break;
	}
	ans = ans - 1;
	}
	
	}
}