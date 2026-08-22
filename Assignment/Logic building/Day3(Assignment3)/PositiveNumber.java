import java.util.Scanner;

public class PositiveNumber{
	
	static void askForPositiveNumber() {
		
		Scanner sc = new Scanner(System.in);
		int num;
		
		do {
			System.out.print("Enter a positive Numbers :  ");
			num = sc.nextInt();
		}
		while(num <= 0);
		System.out.println("You entered a positive number : ");
		
	} 
	public static void main(String[] args) {
		
		askForPositiveNumber();
	}
}