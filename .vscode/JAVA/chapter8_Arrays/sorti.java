
import.java.io.*;
public class sorti {
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        int data[]=new int[n];
        for(int i=0;i<n;i++)
        {
            data[i]=Integer.parseInt(br.readLine());

        } 
        for(int i=0;i<n;i++)
        {
        System.out.print("\t"+data[i]);
        }
    }
    
}
