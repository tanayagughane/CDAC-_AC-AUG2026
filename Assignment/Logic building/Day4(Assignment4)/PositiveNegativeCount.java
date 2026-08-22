import java.util.Scanner;
import java.util.Arrays;

public class PositiveNegativeCount{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int[] numbers = new int[6];
		System.out.println("Enter 6 Integer: ");
		
		for(int i=0; i<5; i++){
			numbers[i] = sc.nextInt();
		}
		
		int positiveCount = 0;
		int negativeCount = 0;
		
		for (int num : numbers){
			if(num > 0){
				positiveCount++;
			} else if (num < 0){
				negativeCount++;
			}
			// 0 is ignored as it is neither positive nor negative.
		}
	
		
		System.out.println("Positive numbers: " + positiveCount);
		System.out.println("Negative numbers: " + negativeCount);
	}
}