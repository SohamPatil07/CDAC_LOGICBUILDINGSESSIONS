import java.util.Scanner;

public class methodcalling{

	
	static int sumOfTwoNumbers(int a , int b){
	int sum = a + b;
	return sum;
}


	public static void main(String[] args){
		Scanner sc =  new Scanner(System.in);

		System.out.println("enter first number: ");
		int num1 = sc.nextInt();

		System.out.println("enter second number: ");
		int num2 = sc.nextInt();

		System.out.println("Sum: " +sumOfTwoNumbers(num1,num2));


}


}