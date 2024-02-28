// package chapter7_Input And Output;
import java.io.*;
public class collectdataOfEmp {
    public static void main(String args[])throws IOException
    {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
System.out.print("Enter NAME ");
String name=br.readLine();
System.out.print("enter id");
int id=Integer.parseInt(br.readLine());
System.out.print("Enter salary ");
float sal=Float.parseFloat(br.readLine());
System.out.print("enter sex(M/F)");
char sex=(char)br.readLine().charAt(0);


System.out.println(" id: "+id);
// System.out.println("salary: "+sal);
System.out.println("sex(M/F): "+sex);
System.out.println(" NAME: "+name);
    }
    
}
