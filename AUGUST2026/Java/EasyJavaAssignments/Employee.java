public class Employee
{
    String name;
    int yearOfJoining;
    double salary;
    String address;

    Employee(String name, int yearOfJoining, double salary, String address)
    {
        this.name = name;
        this.yearOfJoining = yearOfJoining;
        this.salary = salary;
        this.address = address;
    }

    public static void main(String[] args)
    {
        Employee e1 = new Employee("Robert", 1994, 50000, "64C- WallsStreat");
        Employee e2 = new Employee("Sam", 2000, 55000, "68D- WallsStreat");
        Employee e3 = new Employee("John", 1999, 60000, "26B- WallsStreat");

        System.out.println("Name\t\tYear of joining\t\tAddress");

        System.out.println(e1.name + "\t\t" + e1.yearOfJoining + "\t\t\t" + e1.address);
        System.out.println(e2.name + "\t\t" + e2.yearOfJoining + "\t\t\t" + e2.address);
        System.out.println(e3.name + "\t\t" + e3.yearOfJoining + "\t\t\t" + e3.address);
    }
}


