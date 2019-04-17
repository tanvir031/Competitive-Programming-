import java.util.Scanner;
import java.math.BigInteger;


public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext()){
		    int n,a;
		n = in.nextInt();
		a = in.nextInt();
		
		BigInteger b1 = BigInteger.ONE;
		BigInteger b2 = BigInteger.ZERO;
		BigInteger b3 = BigInteger.valueOf(a);
		
		for(int i=1;i<=n;i++)
		{
		    b2 = b2.add(b3.pow(i).multiply(BigInteger.valueOf(i)));
		}
	    
	    System.out.println(b2);
		}
		
	    	
	}
}