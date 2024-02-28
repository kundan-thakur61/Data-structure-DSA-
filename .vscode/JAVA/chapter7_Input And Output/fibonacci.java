// package chapter7_Input And Output;

import java.io.BufferedReader;
import java.io.IOException;

import java.io.*;
public class fibonacci {
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("how many number to generate fibonacci series\n");
        int n=Integer.parseInt(br.readLine());
        long f1=0,f2=1;
        System.out.println(f1);
        System.out.println(f2);

        long F=f1+f2;
        System.out.println(F);
        int count =3;
        while(count<n)
        {
            f1=f2;
            f2=F;
            F=f1+f2 ;
            System.out.println((F));
            count++;
        }
    }
    
}
