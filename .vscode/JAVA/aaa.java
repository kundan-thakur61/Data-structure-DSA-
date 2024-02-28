

class one {
    static void calculate(double x) {
        System.out.println("the square is:" + (x * x));
    }
}

class two extends one {
    static void calculate(double x) {
        System.out.println("the square root is:" + Math.sqrt(x));
    }
}

public class aaa {
    public static void main(String[] args) {
        one o = new two();
        o.calculate(25); // Call the calculate method from class two directly
    }
}
