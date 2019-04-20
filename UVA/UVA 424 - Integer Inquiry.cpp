import java.util.Scanner;
import java.math.BigInteger;


public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger b3 = BigInteger.ZERO;
		while(in.hasNext())
		{
		    String a = in.nextLine();
		    String c = "0";
		    if(a.equals(c))
		    {
		    	System.out.println(b3);
		    	System.exit(0);
		    }
		    BigInteger b1 = new BigInteger(a);
		    
		    b3 = b3.add(b1);
		    
		}
	}
}
