// package chapter7_Input And Output;

import java.io.*;

public class findleapYear {
    public static void main(String args[]) throws IOException
    {
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.err.println("enter a leap year\n");
int year=Integer.parseInt(br.readLine());
if(year%100==0&&year%400==0)
{
    System.out.println("it is leap year\n");
    
} 
   else if(year%100!=0&&year%4==0)
{
System.out.println("it  is leap year\n");
}
else
{
    System.out.println("it is not leap year");
}
}
    }
    