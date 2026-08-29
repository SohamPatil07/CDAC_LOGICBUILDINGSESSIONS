import java.util.Arrays;
import java.util.Scanner;

public class BinarySearchArray{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int[] numbers = new int[5];

		System.out.println("enter 5 integers: ");

		for(int i=0;i<5;i++){
			numbers[i] = sc.nextInt();
}
	
		Arrays.sort(numbers);

		System.out.println("enter the number you want to search: ");


		int searchNumber = sc.nextInt();


		int index = Arrays.binarySearch(numbers,searchNumber);

		if(index>0){

			System.out.println("The number is at index: " + index);
}

		else{
			System.out.print("Not found");

}
		

		

}
}