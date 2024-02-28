// package chapter7_Input And Output;
import java.io.*;
import java.util.StringTokenizer;
public class Arithmatic_Operation {
    public static void main(String args[]) throws IOException
    {
        // accept  data from ketyboard
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println(("enter two integers\n"));
        String str=br.readLine();
         StringTokenizer st=new StringTokenizer(str,",");
    String s1=st.nextToken();
    String s2=st.nextToken();
    s1=s1.trim();
    s1=s2.trim();

    double n1=Double.parseDouble(s1);
double n2=Double.parseDouble(s2);

System.out.println("Addition="+(n1+n2));
System.out.println("substraction="+(n1-n2));
System.out.println("multiplication"+(n1*n2));
System.out.println("divide"+(n1/n2));

}

    
}
