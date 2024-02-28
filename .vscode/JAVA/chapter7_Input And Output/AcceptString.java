// package chapter7_Input And Output;
import java.io.*;
public class AcceptString{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter a string:");
        String name=br.readLine();
        System.out.println("you are entered "+name);
    }
    
}
