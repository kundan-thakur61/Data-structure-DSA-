// program to a method without parameter and without return types
/*
class sample
{
    private double num1,num2;
    sample(double x,double y)
    {
        num1=x;
        num2=y;

    }
    void sum()
    {
        double result ;
        result=num1+num2;
        System.out.println("sum="+result);
    }
}
class methodtype{
    public static void main(String args[])
    {
        sample s=new sample(-4,-2);
        s.sum();
    }
}*/


// program to a method without parameter abut  return types

/*
class sample
{
    private double num1,num2;

    sample(double x,double y)
    {
        num1=x;
        num2=y;
    }
    double sum()
    {
        double result;
        result =num1+num2;
        return result;
    }

    double multiplication()
    {
        double result1;
        result1 =num1*num2;
        return result1;
    }
}
class methodtype
{
    public static void main(String[] args) {
        sample s=new sample(10,20);
        
        double res=s.sum();
        System.out.println("sum="+res);

        sample s1=new sample(20,60);
       double res1= s1.multiplication();
        System.out.println("product="+res1);
    
    }
}*/

// program to a method  parameter about  return types

import java.io.IOException;
import java.io.*;        
class sample{
    double sum(double x,double y) throws IOException
    {
        double result;
        result=x+y;
        return result;
    }

}
class methodtype
{
    public static void main(String[] args) throws IOException
      {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter the value of a:");
        double a=Double.parseDouble(br.readLine());
        System.out.println("enter the value of b:");
        double b=Double.parseDouble(br.readLine());
        sample s=new sample();
       double res= s.sum(a,b);
        System.out.println("sum="+res);
    }
}