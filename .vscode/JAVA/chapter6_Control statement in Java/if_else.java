public class if_else {
    public static void main(String args[])
    {
        int m=33,p=33,c=33,cms=33,eng=33;
        int total=m+p+c+c+cms+eng;
        float avg=total/5;
        if(avg>=80)
        {
            System.out.println("A");
        }
        else if(avg>=60)
        {
            System.out.println("B");
        }
         else if(avg>=40)
        {
            System.out.println("c");
        }
         else if(avg>33)
        {
            System.out.println("pass");
        }
        else
        {
            System.out.println("fail");
        }
    }
}
