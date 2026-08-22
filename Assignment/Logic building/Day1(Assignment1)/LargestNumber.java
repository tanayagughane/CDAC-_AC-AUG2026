public class LargestNumber {
	public static void main(String[] args){
		
		int num1 = 16;
		int num2 = 14;
		int num3 = 23;
		
		if(num1 > num2 && num1 > num3){
			System.out.println("num1 is Largest");
		}
		else if (num2 > num3) {
			System.out.println("num2 is Largest");
		}
		else{
			System.out.println("num3 is Largest");
		}
		
	}
}