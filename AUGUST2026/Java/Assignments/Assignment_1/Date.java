import java.util.Scanner;

public class Date
{
    private int day;
    private int month;
    private int year;


    // Set the date
    public void setDate(int dd, int mm, int yy)
    {
        year = yy;

        if(mm < 1 || mm > 12)
            month = 1;
        else
            month = mm;

        if(dd < 1 || dd > daysInMonth())
            day = 1;
        else
            day = dd;
    }


    // Check leap year
    private boolean isLeapYear()
    {
        return (year % 4 == 0 && year % 100 != 0)
                || year % 400 == 0;
    }


    // Find number of days in current month
    private int daysInMonth()
    {
        if(month == 2)
        {
            if(isLeapYear())
                return 29;
            else
                return 28;
        }

        if(month == 4 || month == 6 ||
           month == 9 || month == 11)
        {
            return 30;
        }

        return 31;
    }


    // Add days
    public void addDays(int days)
    {
        for(int i = 0; i < days; i++)
        {
            day++;

            if(day > daysInMonth())
            {
                day = 1;
                month++;

                if(month > 12)
                {
                    month = 1;
                    year++;
                }
            }
        }
    }


    // Add months
    public void addMonths(int months)
    {
        month = month + months;

        while(month > 12)
        {
            month = month - 12;
            year++;
        }

        while(month < 1)
        {
            month = month + 12;
            year--;
        }

        // Fix date if the new month has fewer days
        if(day > daysInMonth())
            day = daysInMonth();
    }


    // Add years
    public void addYears(int years)
    {
        year = year + years;

        // February 29 becomes February 28
        // if the new year is not a leap year
        if(month == 2 && day == 29 && !isLeapYear())
            day = 28;
    }


    // Display date
    public void display()
    {
        System.out.println(
            "Date: " + day + "/" + month + "/" + year
        );
    }


    // Getters
    public int getDay()
    {
        return day;
    }

    public int getMonth()
    {
        return month;
    }

    public int getYear()
    {
        return year;
    }


    // Main menu
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        Date date = new Date();

        System.out.print("Enter day: ");
        int day = sc.nextInt();

        System.out.print("Enter month: ");
        int month = sc.nextInt();

        System.out.print("Enter year: ");
        int year = sc.nextInt();

        date.setDate(day, month, year);


        while(true)
        {
            System.out.println("\n===== DATE MENU =====");
            System.out.println("1. Add Days");
            System.out.println("2. Add Months");
            System.out.println("3. Add Years");
            System.out.println("4. Display Date");
            System.out.println("5. Exit");

            System.out.print("Enter choice: ");
            int choice = sc.nextInt();


            if(choice == 1)
            {
                System.out.print("Enter number of days: ");
                int days = sc.nextInt();

                date.addDays(days);

                System.out.println("Days added successfully.");
            }

            else if(choice == 2)
            {
                System.out.print("Enter number of months: ");
                int months = sc.nextInt();

                date.addMonths(months);

                System.out.println("Months added successfully.");
            }

            else if(choice == 3)
            {
                System.out.print("Enter number of years: ");
                int years = sc.nextInt();

                date.addYears(years);

                System.out.println("Years added successfully.");
            }

            else if(choice == 4)
            {
                date.display();
            }

            else if(choice == 5)
            {
                System.out.println("Program exited.");
                break;
            }

            else
            {
                System.out.println("Invalid choice.");
            }
        }

        sc.close();
    }
}