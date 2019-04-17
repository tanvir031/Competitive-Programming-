import java.util.Scanner;
import java.math.BigInteger;


public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		while(true)
		{
		    String a = in.next();
		    if(a.equals("0")) break;
		String b = "";
		for(int i=a.length()-1;i>=0;i--)
		{
			b += a.charAt(i);
		}

		
		BigInteger b2 = BigInteger.ZERO;
		BigInteger b3 = BigInteger.ZERO;
		
		int k;
		for(int i=1;i<=b.length();i++)
		{
		    BigInteger b1 = BigInteger.ONE;
			
			
			k = (int)b.charAt(i-1) - 48;


			
			b1 = b1.multiply(BigInteger.valueOf(2).pow(i));
			b1 = b1.multiply(BigInteger.valueOf(k));
			b3 = b3.add(b1);
			b3 = b3.subtract(BigInteger.valueOf(k));
			
			
		}

		System.out.println(b3);
		}

	}
}