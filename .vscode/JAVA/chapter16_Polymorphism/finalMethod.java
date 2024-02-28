
class A
{
   final void method1()
   {
    System.out.println("hello");
  
   } 

}
class B
{
void method2()
{
    // System.out.println("hello");
    A a=new A();
    a.method1();
}
}
public class finalMethod {
    public static void main(String[] args) {
         B b=new B();
         b.method2();
    }
}
