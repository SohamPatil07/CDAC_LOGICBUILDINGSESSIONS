public class StringConcatenate{
	public static void main(String[] args){
		String s1 =  "hello";
		String s2 =  "world";
		String s3 =  s1 + s2;


		System.out.println("Is str3 pointing to same object as s1: " + (s3 == s1));
}
}