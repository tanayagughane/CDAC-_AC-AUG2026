import java.util.Scanner;
import java.util.Arrays;

public class FindIndex{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		Integer[] numbers = new Integer[5];
		System.out.println("Enter 5 Integer: ");
		
		for(int i=0; i<5; i++){
			numbers[i] = sc.nextInt();
		}
		
		Arrays.sort(numbers);
		
		System.out.print("Enter the number to search: ");
		int search = sc.nextInt();
		
		int index = Arrays.binarySearch(numbers,search);
		
		if(index >= 0){
			System.out.println("The number " + search + " is found at index " + index);
		} else {
			System.out.println("Not Found");
		}
		
	}
}