
import java.util.Scanner;

public class Complex
{
    int real;
    int imaginary;

    Complex(int real, int imaginary)
    {
        this.real = real;
        this.imaginary = imaginary;
    }

    public void sum(Complex c)
    {
        int realPart = real + c.real;
        int imaginaryPart = imaginary + c.imaginary;

        System.out.println("Sum = " + realPart + " + " + imaginaryPart + "i");
    }

    public void difference(Complex c)
    {
        int realPart = real - c.real;
        int imaginaryPart = imaginary - c.imaginary;

        System.out.println("Difference = " + realPart + " + " + imaginaryPart + "i");
    }

    public void product(Complex c)
    {
        int realPart = (real * c.real) - (imaginary * c.imaginary);
        int imaginaryPart = (real * c.imaginary) + (imaginary * c.real);

        System.out.println("Product = " + realPart + " + " + imaginaryPart + "i");
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter real part of first complex number: ");
        int real1 = sc.nextInt();

        System.out.print("Enter imaginary part of first complex number: ");
        int imaginary1 = sc.nextInt();

        System.out.print("Enter real part of second complex number: ");
        int real2 = sc.nextInt();

        System.out.print("Enter imaginary part of second complex number: ");
        int imaginary2 = sc.nextInt();

        Complex c1 = new Complex(real1, imaginary1);
        Complex c2 = new Complex(real2, imaginary2);

        c1.sum(c2);
        c1.difference(c2);
        c1.product(c2);

        sc.close();
    }
}

