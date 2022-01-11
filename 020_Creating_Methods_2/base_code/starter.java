import java.util.Scanner;
import java.util.Random;
//

class starter {
	public static int Pow(int x,int y) {
	int a = x;
	int b = y;
	int c = x;
	//
	while(true)
	{
	a = a*c;
	System.out.println(a);
	if(b == 2)
	{
	break;
	}
	b = b - 1;
	}
	return a;
	}
	public static void main(String[] args) {
	//
	Scanner sc = new Scanner(System.in); 
	//
	System.out.println("Give me an int");
	int a = sc.nextInt();
	;
	System.out.println("give me anothe int");
	int b = sc.nextInt();
	System.out.println(Pow(a,b));
	}
	}
	

