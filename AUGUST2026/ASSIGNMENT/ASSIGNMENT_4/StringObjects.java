public class StringObjects{
	public static void main(String[] args){
		String s1 =  new String("hello");
		String s2 =  new String("hello");


		System.out.println("using == method: " + (s1==s2));
		System.out.println("using .equals() method: " + (s1.equals(s2)));
}
}