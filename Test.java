import java.util.Scanner;

public class Test
{
	public static void main (String args[])
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Number: ");
		int a = scan.nextInt();
		String result = numType(a);
		System.out.println("The number is " + result);
	}
	
	public static String numType(int a)
	{
		String result = "none";
		if(a < 0)
		{
			result = "negative";
		}
		if(a > 0)
		{
			result = "positive";
		}
		if(a == 0)
		{
			result = "zero";
		}
		return result;
	}
}