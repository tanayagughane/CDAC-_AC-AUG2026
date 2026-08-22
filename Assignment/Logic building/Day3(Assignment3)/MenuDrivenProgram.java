import java.util.Scanner;

public class MenuDrivenProgram {
	
	static byte a;
	static short b;
	static int c;
	static long d;
	static float e;
	static double f;
	static char g;
	static boolean h;
	//static null i; 
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int choice;
		
		do{
			System.out.println("\n----- MENU -----");
            System.out.println("1. Grade Evaluation System");
            System.out.println("2. Leap Year Check");
            System.out.println("3. Day of the Week");
            System.out.println("4. Identify Default Values of Variables");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
			
			switch (choice){
				
				case 1:
                    System.out.print("Enter Maths marks: ");
                    int maths = sc.nextInt();

                    System.out.print("Enter Science marks: ");
                    int science = sc.nextInt();

                    System.out.print("Enter History marks: ");
                    int history = sc.nextInt();

                    double average = (maths + science + history) / 3.0;

                    System.out.println("Average Marks: " + average);

                    if (average >= 90) {
                        System.out.println("Grade: A");
                    } else if (average >= 70) {
                        System.out.println("Grade: B");
                    } else if (average >= 50) {
                        System.out.println("Grade: C");
                    } else if (average >= 30) {
                        System.out.println("Grade: D");
                    } else {
                        System.out.println("Fail");
                    }
                    break;
					
				case 2:
                    System.out.print("Enter year: ");
                    int year = sc.nextInt();

                    if ((year % 4 == 0 && year % 100 != 0)
                            || year % 400 == 0) {
                        System.out.println(year + " is a leap year.");
                    } else {
                        System.out.println(year + " is not a leap year.");
                    }
                    break;
					
				case 3:
                    System.out.print("Enter day number (1-7): ");
                    int dayNumber = sc.nextInt();

                    switch (dayNumber) {

                        case 1:
                            System.out.println("The day is Monday.");
                            break;
						 case 2:
                            System.out.println("The day is Tuesday.");
                            break;

                        case 3:
                            System.out.println("The day is Wednesday.");
                            break;

                        case 4:
                            System.out.println("The day is Thursday.");
                            break;

                        case 5:
                            System.out.println("The day is Friday.");
                            break;

                        case 6:
                            System.out.println("The day is Saturday.");
                            break;

                        case 7:
                            System.out.println("The day is Sunday.");
                            break;

                        default:
                            System.out.println("Invalid day number.");
                    }
                    break;	
					
				case 4:
                    System.out.println("byte value: " + a);
                    System.out.println("short value: " + b);
                    System.out.println("int value: " + c);
                    System.out.println("long value: " + d);
                    System.out.println("float value: " + e);
                    System.out.println("double value: " + f);
                    System.out.println("char value: " + g);
                    System.out.println("boolean value: " + h);
                    break;
					
				 case 5:
                    System.out.println("Program exited.");
                    break;


                default:
                    System.out.println("Invalid choice.");
			}
			
		} while (choice != 5);
		
		sc.close();
	}
}