import java.io.*;

public class input {
    public static void main(String args[]) throws IOException
    {

    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    System.out.println("how many subject?");
    int n=Integer.parseInt(br.readLine());
    int []marks=new int[n];
    for(int i=0;i<n;i++)
    {
        System.out.println("enter marks");
       marks[i]=Integer.parseInt(br.readLine());
    }
    for(int i=0;i<n;i++)
    {
     System.out.println("\n\n\n"+marks[i]);
       
    }
    int total=0;
    float percent;
    for(int i=0;i<n;i++)
    {
    total=total+marks[i];
        
       
    }
    percent=(float)total/n;
    System.out.println("total marks of subjects ");
    System.out.println(total);
        System.out.println(percent);
    }
    
}
