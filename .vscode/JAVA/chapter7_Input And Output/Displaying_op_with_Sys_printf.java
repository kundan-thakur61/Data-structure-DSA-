public class Displaying_op_with_Sys_printf {
    public static void main(String arg[])
    {
        System.out.println("enter NAME ID SALARY\n");
        String name="kundan";
        int id=10;
        double salary=87.05;
        System.out.printf("%s%n%d%n%f%n",name,id,salary);

        // or
        String name1="kundanThakur";
        int id1=10;
        double salary1=89.87;
            String str =String.format("name=%s%nid=%d%nsalary=%f%n",name1,id1,salary1);
    }
    
}
