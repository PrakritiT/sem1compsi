import java.util.Scanner;
import java.util.Random;
//

class starter {

	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in); 
	//
	System.out.println("Give me a string");
	String u = sc.nextLine();
	toString(u);
	System.out.println("give me anothe string");
	String v = sc.nextLine();
	combineoToString(u, v);
	return;
	}

	public static void combineoToString(String a,String b) {
	
		System.out.print(a+" "+b);
		
		
	}
	
	public static void toString(String s){
		System.out.println(s);
		

	}
}
