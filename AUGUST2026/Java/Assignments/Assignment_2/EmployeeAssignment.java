import java.util.ArrayList;
import java.util.Collections;

// Parent class
class Employee
{
    int id;
    String name;
    double salary;

    Employee(int id, String name, double salary)
    {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    void display()
    {
        System.out.println(
            id + "   " + name + "   " + salary
            + "   " + getClass().getSimpleName()
        );
    }
}


// Child class
class Manager extends Employee
{
    Manager(int id, String name, double salary)
    {
        super(id, name, salary);
    }
}


// Child class
class Engineer extends Employee
{
    Engineer(int id, String name, double salary)
    {
        super(id, name, salary);
    }
}


// Child class
class Salesperson extends Employee
{
    Salesperson(int id, String name, double salary)
    {
        super(id, name, salary);
    }
}


// Main class
public class EmployeeAssignment
{
    static java.util.Scanner sc = new java.util.Scanner(System.in);

    static ArrayList<Employee> employees = new ArrayList<>();

    static int current = 0;


    // Add Employee
    static void addEmployee()
    {
        while(true)
        {
            System.out.println("\n--- Add Employee ---");
            System.out.println("1. Manager");
            System.out.println("2. Engineer");
            System.out.println("3. Salesperson");
            System.out.println("4. Exit to Main Menu");

            System.out.print("Enter choice: ");
            int choice = sc.nextInt();
            sc.nextLine();

            if(choice == 4)
                break;

            System.out.print("Enter ID: ");
            int id = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Salary: ");
            double salary = sc.nextDouble();


            if(choice == 1)
                employees.add(new Manager(id, name, salary));

            else if(choice == 2)
                employees.add(new Engineer(id, name, salary));

            else if(choice == 3)
                employees.add(new Salesperson(id, name, salary));

            else
            {
                System.out.println("Invalid choice.");
                continue;
            }

            System.out.println("Employee added successfully.");
        }
    }


    // Display one employee
    static void show(Employee e)
    {
        System.out.println(
            e.id + "   " + e.name + "   "
            + e.salary + "   "
            + e.getClass().getSimpleName()
        );
    }


    // Display Employees
    static void displayEmployees()
    {
        while(true)
        {
            System.out.println("\n--- Display ---");
            System.out.println("1. All Employees");
            System.out.println("2. First Employee");
            System.out.println("3. Next Employee");
            System.out.println("4. Previous Employee");
            System.out.println("5. Last Employee");
            System.out.println("6. Exit to Main Menu");

            System.out.print("Enter choice: ");
            int choice = sc.nextInt();


            if(choice == 6)
                break;

            if(employees.isEmpty())
            {
                System.out.println("No employees available.");
                continue;
            }


            if(choice == 1)
            {
                for(Employee e : employees)
                    show(e);
            }

            else if(choice == 2)
            {
                current = 0;
                show(employees.get(current));
            }

            else if(choice == 3)
            {
                if(current < employees.size() - 1)
                    current++;

                show(employees.get(current));
            }

            else if(choice == 4)
            {
                if(current > 0)
                    current--;

                show(employees.get(current));
            }

            else if(choice == 5)
            {
                current = employees.size() - 1;
                show(employees.get(current));
            }

            else
                System.out.println("Invalid choice.");
        }
    }


    // Sort Employees
    static void sortEmployees()
    {
        while(true)
        {
            System.out.println("\n--- Sort ---");
            System.out.println("1. All Managers");
            System.out.println("2. All Engineers");
            System.out.println("3. All Salespersons");
            System.out.println("4. Alphabetic Ascending");
            System.out.println("5. Alphabetic Descending");
            System.out.println("6. Exit to Main Menu");

            System.out.print("Enter choice: ");
            int choice = sc.nextInt();


            if(choice == 6)
                break;


            if(choice == 1)
            {
                for(Employee e : employees)
                {
                    if(e instanceof Manager)
                        show(e);
                }
            }

            else if(choice == 2)
            {
                for(Employee e : employees)
                {
                    if(e instanceof Engineer)
                        show(e);
                }
            }

            else if(choice == 3)
            {
                for(Employee e : employees)
                {
                    if(e instanceof Salesperson)
                        show(e);
                }
            }

            else if(choice == 4)
            {
                Collections.sort(
                    employees,
                    (a, b) -> a.name.compareToIgnoreCase(b.name)
                );

                for(Employee e : employees)
                    show(e);
            }

            else if(choice == 5)
            {
                Collections.sort(
                    employees,
                    (a, b) -> b.name.compareToIgnoreCase(a.name)
                );

                for(Employee e : employees)
                    show(e);
            }

            else
                System.out.println("Invalid choice.");
        }
    }


    // Main Menu
    public static void main(String[] args)
    {
        while(true)
        {
            System.out.println("\n========================");
            System.out.println("   EMPLOYEE MANAGEMENT");
            System.out.println("========================");

            System.out.println("1. Add an Employee");
            System.out.println("2. Display");
            System.out.println("3. Sort");
            System.out.println("4. Exit");

            System.out.print("Enter choice: ");
            int choice = sc.nextInt();


            if(choice == 1)
                addEmployee();

            else if(choice == 2)
                displayEmployees();

            else if(choice == 3)
                sortEmployees();

            else if(choice == 4)
            {
                System.out.println("Program exited.");
                break;
            }

            else
                System.out.println("Invalid choice.");
        }

        sc.close();
    }
}