import java.util.Scanner;
import java.util.Random;
//

class starter {

	public static String multiplytoint(int x,int y) {
	int a = x;
	int b = y;
	int product = (a*b);
	
	if(product%3==0)
	{
		return "it is divisibal by 3";
	}
	else
	{ 
		return"it is not divisiable by 3";
	}
	
	}



	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in); 
	//
	System.out.println("Give me an int");
	int a = sc.nextInt();
	System.out.println("give me anothe int");
	int b = sc.nextInt();
	System.out.println(multiplytoint(a,b));
	}
	}
