import java.util.Scanner;


public class SumofArray {
    public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		System.out.println("enter 5 numbers");
		
		
		int[] numbers =  new int[5];
		int sum = 0;

		for(int i =0; i<5;i++){
			numbers[i] = sc.nextInt();
}

		for(int num: numbers){
			sum = sum + num;
			System.out.println("Sum: " + sum);
}

		
		
            }
}
