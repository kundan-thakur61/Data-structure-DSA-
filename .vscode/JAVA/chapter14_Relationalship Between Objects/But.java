
import java.awt.*;
import java.awt.event.*;
class But extends Frame
{
    But()
    {
    Button b=new Button("do not click here....");
    add(b);
    b.addActionListener(new myclass());
    }

public static void main(String[] args) {
    But obj=new But();
    obj.setSize(800,600);
    obj.setVisible(true);
}
}


class myclass implements ActionListener
{
    public void actionPerformed(ActionEvent ae)
    {
        System.exit(0); 
    }
}








/*import java.awt.*;
import java.awt.event.*;
public class But extends Frame
{
    But()
    {
        Button b=new Button("ok");
        add(b);
        b.addActionListener(new ActionListener() 
        {
       
            public void actionPerformed(ActionEvent ae)
            {
                System.exit(0);
            }
        });
    }
    public static void main(String[] args) {
        But obj=new But() ;
        obj.setSize(400,300);
        obj.setVisible(true);
    }
}
*/


/*

import java.awt.*;
import java.awt.event.*;

public class But extends Frame {
    But() {
        Button b = new Button("ok");
        add(b);
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                System.exit(0);
            }
        });
    }

    public static void main(String[] args) {
        But obj = new But();
        obj.setSize(400, 300);
        obj.setVisible(true);
    }
}
*/