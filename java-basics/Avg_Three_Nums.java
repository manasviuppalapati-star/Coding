
import java.util.Scanner;
public class Avg_Three_Nums {

	public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           System.out.println("Enter the num1:");
           int num1 = sc.nextInt();
           System.out.println("Enter num2:");
           int num2 = sc.nextInt();
           System.out.println("Enter num3");
           int num3 = sc.nextInt();
           int avg = (num1+num2+num3)/3;
           System.out.println("Avg = "+ avg);
           sc.close();
	}

}
