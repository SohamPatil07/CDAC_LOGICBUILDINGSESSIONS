import java.util.Scanner;

public class largestArray {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 5 integers");

		int[] numbers = new int[5];

		for(int i = 0;i<5;i++){
		numbers[i] = sc.nextInt();
}

		int largest = numbers[0];
		for(int num: numbers){

			if(num> largest){
			largest = num;
}

}

		System.out.println("Largest element: " + largest);

		
		
            }
}
