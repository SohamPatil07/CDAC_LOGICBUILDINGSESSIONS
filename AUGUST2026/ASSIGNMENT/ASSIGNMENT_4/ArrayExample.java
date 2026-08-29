import java.util.Scanner;


public class ArrayExample {
    public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		System.out.println("enter 5 numbers");
		
		
		int[] numbers =  new int[5];

		for(int i =0; i<5;i++){
			numbers[i] = sc.nextInt();
}

		for(int num: numbers){
			System.out.print(num + " ");
}

		sc.close();
		
            }
}





