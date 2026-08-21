import java.util.Scanner;

public class inputPositive{
	static void EnterPositive(){

		Scanner sc =  new Scanner(System.in);
		int num;
		
		do{
		System.out.println("enter a number: ");
		num = sc.nextInt();	
}
		while(num<=0);

		System.out.println("You entered a positive number");

}

	public static void main(String[] args){
		
		EnterPositive();

}

}