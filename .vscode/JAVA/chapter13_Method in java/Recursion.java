public class Recursion {
static long factorial(long num)
{
    if(num==0)
    return 1;
    long result;
    result=factorial(num-1)*num;
    return result;
}    
public static void main(String[] args) {
    System.out.print("factorial of 5: ");
    System.out.println(factorial(5));
}
}
