import java.util.Scanner;

public class AverageMarks {
    public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.println("enter marks of 3 subjects: ");
		int Maths = sc.nextInt();
		int Science = sc.nextInt();
		int History = sc.nextInt();


		double avg = (Maths + Science + History) / 3.0;
		System.out.println("Average marks: " + avg);

		if(avg >=90) System.out.println("GRADE A");
		else if (avg >=70 & avg <=89) System.out.println("GRADE B");
		else if (avg>=50 & avg<=69) System.out.println("GRADE C");
		else System.out.println("FAIL");


	
		
           }
}