import java.util.Scanner;

public class FactoricalOfNumber{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int n = sc.nextInt();
		
		long factorical = 1;
		
		for (int i=1; i<=n; i++){
			factorical *= i;
		}
		System.out.print("Factorical of number " + n + " is "  + factorical);
		
	}
}