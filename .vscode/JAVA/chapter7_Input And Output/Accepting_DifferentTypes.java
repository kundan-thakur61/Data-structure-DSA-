// package chapter7_Input And Output;
import java.io.*;
import java.util.StringTokenizer;
public class Accepting_DifferentTypes {
    public static void main(String ars[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter NAME AGE SALARY\n");

        String str=br.readLine();
        StringTokenizer kt =new StringTokenizer(str," ,");
        String s1=kt.nextToken();
        String s2=kt.nextToken();
        String s3=kt.nextToken();
    
    s1=s1.trim();
    s2=s2.trim();
    s3=s3.trim();

    String Name=s1;
    int age=Integer.parseInt(s2);
    float SALARY=Float.parseFloat(s3);


System.out.println("name"+Name);
System.out.println("age"+age);
System.out.println("float"+SALARY);
    }
}
