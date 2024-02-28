//wap to create person  class object

class person
{
    private String name;
    private int age;
    //mutator method to store data
    public void setName(String name)
    {
        this.name=name;
    }
    public void setAge(int Age)
    {
        this.age=Age;

    }
    //accessor method to read data
    public String getName()
        {
            return name;
        }
    public int getAge()
    {
        return age;
    }
}
public class InstanceMethods {
    public static void main(String[] args) {
        person p1=new person();
        p1.setName("kundan");
        p1.setAge(22);
        System.out.println("NAME="+ p1.getName());
        System.out.println("age="+p1.getAge());
    }
    
}
