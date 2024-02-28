//program for a static mehods that accept data and returns the result
/*  
import java.io.BufferedReader;
import java.io.*;
class sample{
    static double sum(double num1,double num2)
    {
        double r= num1+num2;
        return r;                                       
    }
}
public class StaticMethod {
 public static void main(String[] args)throws IOException
  {
    BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
    double a,b;
 System.out.println("enter the value of a: ");
 a=Double.parseDouble(br.readLine());
 System.out.println("enter the value of b: ");
 b=Double.parseDouble(br.readLine());
 sample s=new sample();
double res1= s.sum(a,b);
System.out.println("result="+res1);
 }   
}

*/

//WAP TO CHECK WETHER A STAIC METHOD CAN ACCESS INSTANCE VARIABLES OR NOT
/* 
class test
{
     int x;
    test (int x)
    {
        this.x=x;

    }
    static void ACCESS()
    {
        System.out.println("x="+x);
    }
}
class StaticMethod
{
    public static void main(String args[])
    {
        test t=new test(5);
        t.ACCESS();
    }
}

//output:error
*/

class test
{
    static  int x;
    test (int x)
    {
        this.x=x;

    }
    static void ACCESS()
    {
        System.out.println("x="+x);
    }
}
class StaticMethod
{
    public static void main(String args[])
    {
        test t=new test(5);
        t.ACCESS();
    }
}

//output:x=5