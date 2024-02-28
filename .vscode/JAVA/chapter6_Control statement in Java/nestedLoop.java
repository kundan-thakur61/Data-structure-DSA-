// package chapter6_Control statement in Java;

public class nestedLoop {
    public static void main(String args[])
    {
        /* 
        for(int i=1;i<=3;i++)
        {
            System.out.println("i="+i+"\n");
            for(int j=1;j<=5;j++)
            {
                  System.out.println("\tj="+i); 
            }
        }*/

        /*display triange */
        int n=5;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("*\t");
            }
            System.out.print("\n");
        }

    }
    
}
