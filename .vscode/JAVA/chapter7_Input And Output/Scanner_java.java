import java.util.Scanner;
public class Scanner_java {
    public static void main(String arfg[])
    {
        System.out.println("enter NAME ID SALARY\n");
        Scanner sc=new Scanner(System.in);
        
        String name=sc.next();
        int id=sc.nextInt();
        float salary=sc.nextFloat();
        System.out.println("ID:"+id);
        System.out.println("name:"+name);
        System.out.println("salary:"+salary);


    }

    
}
