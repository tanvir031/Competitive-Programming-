import java.util.Scanner;
import java.math.BigInteger;
 
 
public class Main
{
    public static void main(String[] args) {
       
        Scanner in = new Scanner(System.in);
       
        int nx = in.nextInt();
       
        for(int as=0;as<nx;as++)
        {
            String a = in.next();
        String b = in.next();
        String x = "";
        String y = "";
       
        for(int i=a.length()-1;i>=0;i--)
        {
            x = x + a.charAt(i);
        }
       
        for(int i=b.length()-1;i>=0;i--)
        {
            y = y + b.charAt(i);
        }
       
       
       
        BigInteger B1 = new BigInteger(x);
        BigInteger B2 = new BigInteger(y);
       
        BigInteger B3 =  BigInteger.ZERO;
       
        BigInteger B4 = B3.add(B1.add(B2));
       
       
        int radix = 10;
        String result = B4.toString(radix);
       
        boolean z = false;
        for(int i=result.length()-1;i>=0;i--)
        {
            if(result.charAt(i)!='0') z = true;
            if(z) System.out.print(result.charAt(i));
        }
        System.out.println();
       
       
        }
       
       
    }
}