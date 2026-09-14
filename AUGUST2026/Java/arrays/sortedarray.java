import java.util.Scanner;

public class sortedarray {
    public static void main(String[] args){
        int size;
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter size: " );
        size = sc.nextInt();

        int[] numbers =  new int[size];

        for(int i=0;i<numbers.length;i++){
            System.out.println("enter elements: ");
            numbers[i] = sc.nextInt();
            // System.out.println(numbers[i]);
        }

        for(int i=0;i<numbers.length -1;i++){
            for(int j = i+1;j<numbers.length;j++){
                if(numbers[i] > numbers[j]){
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                 }
            }
        }

        System.out.println("sorted array is: ");
        for(int i=0;i<numbers.length;i++){
            System.out.println(numbers[i] +  " ");
        }





    }
    
}
