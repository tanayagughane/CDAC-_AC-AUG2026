import java.util.Scanner;

public class Pattern3{
	
	public static void main(String[] args){
		
		for(int i=1; i<=5; i++){
			
			int number = 1;
			
			for(int j=1; j<=i; j++){
				
				System.out.print(number);
				
				if(j<i){
					System.out.print("*");
				}
				
				number = number + 2;
			}
			
			System.out.println();
		}
	}
}