/*
public class StaticBlock {
    static{
        System.out.println("static block");

    }
    public static void main(String[] args) {
        System.out.println("static method");
    }
}
*/

//wap  without main()method this program compiles but givs an eroor at run time
/*
public class StaticBlock {
static{
    System.out.println("ststic block");

}

}*/
//error
//wap  without main() method this program compiles but also run 
public class StaticBlock {
    static{
        System.out.println("ststic block");
    System.exit(0);

    }
    
    }