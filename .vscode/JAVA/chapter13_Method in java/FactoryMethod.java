
// wap for calculating and displaying area of circle ,the area is no formatted and display as it is 

/*public class FactoryMethod {
    public static void main(String[] args) {
        final double PI=(double)22/7;
        double r=15.5;
        double Area=PI*r*r;
        System.out.println(Area);
    }
}

//output: 755.0714285714286
*/
// wap for calculating and displaying area of circle ,the area is  formatted o 7 maximum integer 
// digits and minimum 2 fraction digits and display as it is

import java.text.NumberFormat;

public class FactoryMethod {
    public static void main(String[] args) {
        final double PI=(double)22/7;
        double r=15.5;
        double Area=PI*r*r;
        System.out.println(Area);
        
NumberFormat obj=NumberFormat.getNumberInstance();
obj.setMaximumFractionDigits(7);
obj.setMinimumFractionDigits(2);
String str=obj.format(Area);
System.out.println("Formatted ARea="+str);
}
}