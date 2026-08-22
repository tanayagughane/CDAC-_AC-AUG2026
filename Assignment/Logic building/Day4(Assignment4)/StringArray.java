import java.util.Scanner;

public class StringArray{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		String[] names = new String[4];
		System.out.println("Enter 4 Name: ");
		
		for(int i=0; i<4; i++){
			names[i] = sc.next();
		}
		System.out.println("Names:  ");
		
		for (String name : names)
		// for (int data type : array) 
		{
			System.out.println(name);
		}
	}
}