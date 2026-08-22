import java.util.Scanner;

public class PrintArrayElements{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int[] numbers = new int[5];
		System.out.println("Enter 5 Integer: ");
		
		for(int i=0; i<5; i++){
			numbers[i] = sc.nextInt();
		}
		System.out.println("Array Element:  ");
		
		for (int number : numbers)
		// for (int data type : array) 
		{
			System.out.print(number + "  ");
		}
	}
}