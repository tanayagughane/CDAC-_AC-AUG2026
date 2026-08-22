import java.util.Scanner;
import java.util.Arrays;

public class AverageOfArrayElement{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int[] numbers = new int[5];
		System.out.println("Enter 5 Integer: ");
		
		for(int i=0; i<5; i++){
			numbers[i] = sc.nextInt();
		}
		
		/* int sum = 0;
		for (int number : numbers) {
            sum = sum + number;
        }
		
		double average = (double)sum / numbers.length; */
		
		double average = Arrays.stream(numbers).average().orElse(0.0);
		
		System.out.println("The average of the numbers is: " + average);
	}
}