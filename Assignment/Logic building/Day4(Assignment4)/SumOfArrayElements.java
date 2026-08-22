import java.util.Scanner;

public class SumOfArrayElements{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int[] numbers = new int[5];
		System.out.println("Enter 5 Integer: ");
		
		for(int i=0; i<5; i++){
			numbers[i] = sc.nextInt();
		}
		//System.out.println("Array Element:  ");
	
		int sum = 0;
		for (int number : numbers){
			sum = sum + number;
			
		}
		System.out.print("The sum of all array element is " + sum);
	}
}