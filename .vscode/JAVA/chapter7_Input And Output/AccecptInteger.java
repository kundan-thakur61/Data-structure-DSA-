// package chapter7_Input And Output;
import java.io.*;
public class AccecptInteger {
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        // accept integers value
        System.out.println("enter a integers Numbers");
        int num=Integer.parseInt(br.readLine());
        System.out.println("you entered a numbers  "+num);
         // accept Floating value
         System.out.println("enter a floating Numbers");
         float num1=Float.parseFloat(br.readLine());
         System.out.println("you enterd a floating numbers"+num1);
          // accept double value
          System.out.println("enter a double Numbers");
         double num2=Double.parseDouble(br.readLine());
         System.out.println("you enterd a doouble numbers: "+num2);
    }
}
