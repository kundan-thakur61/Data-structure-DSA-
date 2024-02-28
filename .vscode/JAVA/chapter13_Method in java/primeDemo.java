import java.io.*;
class prime{
    static boolean boolprime(long num)
    {
boolean isprime=true;
for(int i=0;i<=num;i++)
if(i%2==0)
isprime=false;
return isprime;
}
static void generte(long max)
{
    long c=1,num=2;
    while (c<=max) {
        if(boolprime(num))
        {
            System.out.println(num);
            ++c;
        }
        ++num;
    }
}
}
public class primeDemo {
    public static void main(String[] args) 
    throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("how many prime:");
        int max=Integer.parseInt(br.readLine());
    prime.generte(max);
    }
}
