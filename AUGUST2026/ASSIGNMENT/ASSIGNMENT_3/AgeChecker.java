import java.util.Scanner;


public class AgeChecker{

static void checkage(int age){
	if(age<18){
		System.out.println("Minor");
	}
	else if(age>=18 && age <=59){
		System.out.println("Adult");
}
	else{
		System.out.println("Senior Citizen");



}


}

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your age: ");
		int age = sc.nextInt();

		checkage(age);

}

}