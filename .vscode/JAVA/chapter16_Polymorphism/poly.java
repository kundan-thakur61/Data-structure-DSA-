// package chapter16_Polymorphism;

// class one
// {
//     static void calculate(double x)
//     {
//     System.out.println("the square is:"+(x*x));
//     }
// }
// class two extends one
// {
//     static void calculate(double x)
//     {
//     System.out.println("the square root is:"+Math.sqrt(x));
//     }
// }
//  class poly {
//     public static void main(String[] args) {
//         one o=new two();
//         o.calculate(25);
//     }
    
// }

// package chapter16_Polymorphism;

// class one {
//     static void calculate(double x) {
//         System.out.println("the square is:" + (x * x));
//     }
// }

// class two extends one {
//     static void calculate(double x) {
//         System.out.println("the square root is:" + Math.sqrt(x));
//     }
// }

// public class poly {
//     public static void main(String[] args) {
//         one ob = new two();
//         ob.calculate(25); // Call the calculate method from class two directly
//     }
// }
class one {
    void calculate(double x) {
        System.out.println("the square is:" + (x * x));
    }
}

class two extends one {
    @Override
    void calculate(double x) {
        System.out.println("the square root is:" + Math.sqrt(x));
    }
}

public class poly {
    public static void main(String[] args) {
        one ob = new two();
        ob.calculate(25); // This will now correctly call the method from class two
    }
}