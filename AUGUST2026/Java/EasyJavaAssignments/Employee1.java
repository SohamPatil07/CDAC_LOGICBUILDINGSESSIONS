public class Employee1
{
    double salary;
    int hours;

    // Takes salary and working hours
    public void getInfo(double salary, int hours)
    {
        this.salary = salary;
        this.hours = hours;
    }

    // Adds $10 if salary is less than $500
    public void addSal()
    {
        if(salary < 500)
        {
            salary = salary + 10;
        }
    }

    // Adds $5 if working hours are more than 6
    public void addWork()
    {
        if(hours > 6)
        {
            salary = salary + 5;
        }
    }

    public void printSalary()
    {
        System.out.println("Final Salary = $" + salary);
    }

    public static void main(String[] args)
    {
        Employee1 e = new Employee1();

        e.getInfo(450, 8);

        e.addSal();
        e.addWork();

        e.printSalary();
    }
}
