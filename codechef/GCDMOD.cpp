/* package codechef; // don't place package name! */
 
import java.math.BigInteger;
import java.util.Scanner;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		
		for(int i = 0 ; i < n ; i++)
		{
			String a = scn.next();
			String b = scn.next();
			String c = scn.next();
            BigInteger m = new BigInteger("1000000007");
            BigInteger o = new BigInteger("1");
			System.out.println(modularGCD(a, b, c).modPow(o,m));
		}
		
		scn.close();
	}
	
	public static BigInteger modularGCD(String x, String y, String z)
	{
		
		
		
		BigInteger a = new BigInteger(x);
		BigInteger b = new BigInteger(y);
		BigInteger n = new BigInteger(z);
		
		BigInteger one = a.subtract(b);
		one = one.abs();
		if(one.equals(BigInteger.ZERO))
        {
            BigInteger m = new BigInteger("1000000007");
            a = a.modPow(n, m);
		    b = b.modPow(n, m);
            BigInteger two = a.add(b);
            return two;    
        }
		a = a.modPow(n, one);
		b = b.modPow(n, one);
		
		BigInteger two = a.add(b);
		return one.gcd(two);
	}
}
 