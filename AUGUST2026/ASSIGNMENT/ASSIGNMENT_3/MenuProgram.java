import java.util.Scanner;

public class MenuProgram
{
    
    static void gradeEvaluation()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter marks: ");
        int marks = sc.nextInt();

        if (marks >= 90)
            System.out.println("Grade: A");
        else if (marks >= 75)
            System.out.println("Grade: B");
        else if (marks >= 50)
            System.out.println("Grade: C");
        else
            System.out.println("Grade: F");
    }

    
    static void leapYearCheck()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a year: ");
        int year = sc.nextInt();

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            System.out.println(year + " is a leap year.");
        else
            System.out.println(year + " is not a leap year.");
    }

    
    static void dayOfWeek()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter day number (1-7): ");
        int day = sc.nextInt();

        switch (day)
        {
            case 1: System.out.println("Monday"); break;
            case 2: System.out.println("Tuesday"); break;
            case 3: System.out.println("Wednesday"); break;
            case 4: System.out.println("Thursday"); break;
            case 5: System.out.println("Friday"); break;
            case 6: System.out.println("Saturday"); break;
            case 7: System.out.println("Sunday"); break;
            default: System.out.println("Invalid day number.");
        }
    }

  
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your choice (1-4): ");
        int choice = sc.nextInt();

        switch (choice)
        {
            case 1:
                gradeEvaluation();
                break;
            case 2:
                leapYearCheck();
                break;
            case 3:
                dayOfWeek();
                break;
            default:
                System.out.println("Invalid choice.");
        }
    }
}