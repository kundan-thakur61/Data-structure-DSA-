// package chapter13_Method in java;
class check
{
    void swap(int num1,int num2)
    {
    
    int temp=num1;
     num1=num2;
     num2=temp;

    }
}
public class passprimitive {
    public static void main(String[] args) {
        int a=10,b=20;
        check obj=new check();
        // System.out.println("before swap");
        System.out.println(a+"\t"+b);
        obj.swap(a, b);
        // System.out.println("after swap");
        System.out.println(a+"\t"+b);
    }
}
