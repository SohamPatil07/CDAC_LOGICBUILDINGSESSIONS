import java.util.Scanner;


public class countvowels{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("enter your string: ");
		String name = sc.nextLine();
		int count = 0;

		for( char ch : name.toCharArray()){

			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
				count++;
		
}

} 
			System.out.println("number of vowels are: " + count);

}
}