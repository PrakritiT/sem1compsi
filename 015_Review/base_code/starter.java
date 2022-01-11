import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		//
		int rempt1 = 0;
		int rempt2 = 0;
		int rempt3 = 0;
		int rempt4 = 0;
		int rempt5 = 0;
		Scanner sc = new Scanner (System.in);
		System.out.println("What shall I call you outlander?");
		String name = sc.nextLine();
		// 
		System.out.println("What is your title " + name + "?");
		String title = sc.nextLine();
		//
		System.out.println("Are you a Wizard, Warrior, or Rogue?"); 
		String role = sc.nextLine();
		//
		System.out.println("Now you need to level up your traits young" + role + ".");
		System.out.println("You have 25 points to spend on 5 traits and may spend no more then 10 points each");
		System.out.println("Your traits are as follows: Strength, Dexterity, Intelligence, Health, Charisma"); 
		//
		System.out.println("Strength points (0-10");
		int st = sc.nextInt();
		boolean maxst = (st > 10 || st<0 );
		if(maxst)
		{
			System.out.print("You have gone over the limit, please select a value [0,10]");
			int strty = sc.nextInt();
			st = strty;
			rempt1 = (25-strty);
			System.out.println("You have " + rempt1 + " points remaning.");
		}
		else
		{
		rempt1 = (25-st);
		System.out.println("You have " + rempt1 + " points remaning.");
		}
		//
		System.out.println("Dexterity points (0-10");
		int dex = sc.nextInt();
		boolean maxdex = (dex > 10 || dex<0);
		if(maxdex)
		{
			System.out.println("You have gone over the limit, please select a value [0,10]");
			int dexrty = sc.nextInt();
			dex = dexrty;
			rempt2 = (rempt1-dexrty);
			System.out.println("You have " + rempt2 + " points remaning.");
		}
		else
		{
		rempt2 = (rempt1-dex);
		System.out.println("You have " + rempt2 + " points remaning.");
		}
		//
		System.out.println("Intelligence points (0-10");
		int inte = sc.nextInt();
		boolean maxinte = (inte > 10 || inte < 0);
		if(maxinte)
		{
			System.out.println("You have gone outside the limit, please select a value [0,10]");
			int interty = sc.nextInt();
			inte = interty;
			rempt3 = (rempt2-interty);
			System.out.println("You have " + rempt3 + " points remaning.");
		}
		else
		{
		rempt3 = (rempt2-inte);
		System.out.println("You have " + rempt3 + " points remaning.");
		}
		//
		System.out.println("Health points (0-10");
		int hp = sc.nextInt();
		boolean maxhp = (hp > 10 || hp < 0 );
		if(maxhp)
		{
			System.out.println("You have gone outside the limit, please select a value [0,10]");
			int hprty = sc.nextInt();
			hp = hprty;
			rempt4 = (rempt3-hprty);
			System.out.println("You have " + rempt4 + " points remaning.");
		}
		else
		{
		rempt4 = (rempt3-hp);
		System.out.println("You have " + rempt4 + " points remaning.");
		}
		//
		System.out.println("Charisma points (0-10");
		int cha = sc.nextInt();
		boolean maxcha = (cha > 10 || cha < 0);
		if(maxcha)
		{
			System.out.println("You have gone outside the limit, please select a value [0,10]");
			int charty = sc.nextInt();
			cha = charty;
			rempt5 = (rempt4-charty);
			System.out.println("You have " + rempt5 + " points remaning.");
		}
		else
		{
		rempt5 = (rempt4-cha);
		System.out.println("You have " + rempt5 + " points remaning.");
		}
		//
		boolean maxpt = ((st + dex + inte + hp + cha)>25);
		if(maxpt)
		{
			System.out.println("Your points totals over 25. Please try again :)");
		}
		else
		{
		System.out.println("Role-" + role + "");
		System.out.println("Title- " + name + "" + title +"");
		System.out.println("Your stat is as follow:");
		System.out.println("Strength-" + st + "");
		System.out.println("Dexterity-" + dex + "");
		System.out.println("Intelligence-" + inte + "");
		System.out.println("Health-" + hp + "");
		System.out.println("Charisma-" + cha + "");
		}
	}	
}
