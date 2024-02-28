//LET US A PROGRAM BY TAKING AN INSTANCE VARIABLES X IN THE TEST CLASS

/*
class Instance_class
{
    int x=10;//INSTANCE VARIABLES
    void display()
    {
        System.out.println(x);
    }
}

public class Different {
    public static void main(String[] args) {
        Instance_class obj1,obj2;
        obj1=new Instance_class();
        obj2=new Instance_class();
        ++obj1.x;
    
        System.out.println("x in obj1:");
        obj1.display();
        System.out.println("x in obj2:");
        obj2.display();
        
    }
    
}

//OUTPUT: 
x in obj1:
11
x in obj2:
10
*/

//LET US A PROGRAM BY TAKING AN INSTANCE VARIABLES X IN THE TEST CLASS
class Instance_class
{
    static int X=10;
  static  void  display()
    {
        System.out.println(X);
    }
}
class Different
{
    public static void main(String[] args) {
        Instance_class obj1,obj2;
        obj1=new Instance_class();
        obj2=new Instance_class();
        ++obj1.X;
        System.err.println("x in obj1");
        obj1.display();
        System.out.println("x in obj2"  );
        obj2.display();
        
    }
}