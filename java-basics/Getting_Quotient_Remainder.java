
import java.util.Scanner;
public class Getting_Quotient_Remainder {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num1:");
		int num1 = sc.nextInt();
		System.out.println("Enter num2:");
		int num2 = sc.nextInt();
		int quo = num1/num2;
		int rem = num1%num2; 
		System.out.println("Quotient="+ quo);
		System.out.println("Remainder=" + rem);
		sc.close();
		
		

	}

}
