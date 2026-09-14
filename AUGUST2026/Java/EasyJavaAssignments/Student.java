public class Student {
    String name;
    int roll_no;
    String phone_no;
    String address;
    public static void main(String[] args){

        Student student1 =  new Student();
        student1.name = "John";
        student1.roll_no = 2;
        
        System.out.println("Name: " + student1.name);
        System.out.println("Roll no: " + student1.roll_no);
        
        Student sam =  new Student();

        sam.name = "Sam";
        sam.roll_no = 1;
        sam.phone_no = "8999261784";
        sam.address = "Pune";

        Student john = new Student();

        john.name = "john";
        john.roll_no = 2;
        john.phone_no = "82332232332";
        john.address = "Kolhapur";

        System.out.println("Sam:");
        System.out.println("Roll no:" + sam.roll_no);
        System.out.println("Phone no:" + sam.phone_no);
        System.out.println("Address:" + sam.address);

         System.out.println("John:");
        System.out.println("Roll no:" + john.roll_no);
        System.out.println("Phone no:" + john.phone_no);
        System.out.println("Address:" + john.address);
        

    }

}

