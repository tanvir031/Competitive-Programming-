import java.util.Scanner;
import java.math.BigInteger;


public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext())
		{
		    String a = in.nextLine();
		    String b = in.nextLine();
		    
		    BigInteger b1 = new BigInteger(a);
		    BigInteger b2 = new BigInteger(b);
		    BigInteger b3 = BigInteger.ONE;
		    b3 = b3.multiply(b1.multiply(b2));
		    System.out.println(b3);
		}
	}
}
