// WAP TO USE 'THIS' KEYWORD REFERS TO THE CURRENT CLASS PARAMETERAISED CONSTRUCOR A THIS() IT METHOD 
// AS 'THIS.METHOD' AND ITS INSTANCE VARIABLES AS 'THIS.VARIABLES' 

    class use_this
    {
        private int x;
        use_this(int x)
        {
            this.x=x;
        }
        void access()
        {
            System.out.println("x="+x);
        }
        use_this()
        {
            this(55);
            this.access();
        }
    }

public class Keyword_This { 
    public static void main(String[] args) {
        use_this u=new use_this();
    }
}
