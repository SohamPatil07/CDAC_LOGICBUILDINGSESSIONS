import java.util.Scanner;

public class ComplexNumber
{
    // Data members
    private int number1;
    private int number2;

    // Getter for number1
    public int getNumber1()
    {
        return number1;
    }

    // Setter for number1
    public void setNumber1(int number1)
    {
        this.number1 = number1;
    }

    // Getter for number2
    public int getNumber2()
    {
        return number2;
    }

    // Setter for number2
    public void setNumber2(int number2)
    {
        this.number2 = number2;
    }

    // Method to multiply number1 and number2
    public int computeComplexNumber()
    {
        return number1 * number2;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        // Array of 5 ComplexNumber objects
        ComplexNumber[] arr = new ComplexNumber[5];

        // Create objects and take input
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = new ComplexNumber();

            System.out.print("Enter number1: ");
            arr[i].setNumber1(sc.nextInt());

            System.out.print("Enter number2: ");
            arr[i].setNumber2(sc.nextInt());
        }

        // Display results
        System.out.println("Results:");

        for(int i = 0; i < arr.length; i++)
        {
            System.out.println(arr[i].computeComplexNumber());
        }

        sc.close();
    }
}

