// package chapter8_Arrays;

import java.io.*;
public class BubbleSort {
    public static void main(String args[]) throws IOException{

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         System.out.println("how any enter data");
        int n=Integer.parseInt(br.readLine());
        int data[]=new int[n];
        for(int i=0;i<n;i++)
        {
            data[i]=Integer.parseInt(br.readLine());

        } 
        System.out.println("you enter data are...");
        for(int i=0;i<n;i++)
        {
        System.out.print("\t"+data[i]);
        }
        int limit=n-1;
        int temp;
        boolean flage=false;
        for(int i=0;i<limit;i++)
        {
            for(int j=0;j<limit-i;j++)
            {
                if(data[j]>data[j+1])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                    flage=true;
                }
            }
            if(flage==false)
            break;
            else
            flage=false;  
        }
        System.out.println("sorted array is:");
        for(int i=0;i<n;i++)
        System.out.println(data[i]);
    }    
}
