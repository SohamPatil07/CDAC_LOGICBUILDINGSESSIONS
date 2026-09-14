public class Triangle
{
    int side1;
    int side2;
    int side3;

    Triangle(int side1, int side2, int side3)
    {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    public void calculate()
    {
        int perimeter = side1 + side2 + side3;

        double semiPerimeter = perimeter / 2.0;

        double area = Math.sqrt(
            semiPerimeter *
            (semiPerimeter - side1) *
            (semiPerimeter - side2) *
            (semiPerimeter - side3)
        );

        System.out.println("Perimeter = " + perimeter);
        System.out.println("Area = " + area);
    }

    public static void main(String[] args)
    {
        Triangle t = new Triangle(3, 4, 5);

        t.calculate();
    }
}
