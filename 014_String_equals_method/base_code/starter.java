import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner (System.in);
		System.out.println("DO you want to be a Wizard, Warrior, or Rogue?"); 
		String x = sc.nextLine();
		
		if (x.equals("Wizard"))
		{
		System.out.println("You're a wizard Harry");
		}
		else if (x.equals("Rogue"))
		{
		System.out.println("Here's your misterious robe");
		}
		else if (x.equals("Warrior"))
		{
		System.out.println("nicenice, your a Warrior");
		}
		else
		{
		System.out.println("Please capitalize the first letter and spell correctly");
		}
	
	}
}
