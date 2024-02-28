
import java.awt.*;
import javax.swing.*;
import javax.swing.border.*;
public class ButtonDemo extends JFrame
{
JButton b;
ButtonDemo()
{
//create container
Container c = getContentPane();



c.setLayout(new FlowLayout());
//store the image into ImageIcon object 
ImageIcon ii = new ImageIcon("car2.gif");
//create the button with the image
 b = new JButton("Click Me", ii);
//set background and foreground colors for button
 b.setBackground(Color.yellow); b.setForeground(Color.red);
//set font for the label of button 
b.setFont(new Font("Arial", Font.BOLD, 30));
//set bevel border for button

Border bd =BorderFactory.createBevelBorder(BevelBorder. RAISED); 
b.setBorder(bd);
//set tool tip text for button
b.setToolTipText("This is a button");
//set a short cut key for button. Alt+C from keyboard will invoke the button
b.setMnemonic('c');


//add the button to the container
c.add(b);
//close the frame upon clicking
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}
public static void main(String args[]) 
{
//create a frame
ButtonDemo obj = new ButtonDemo();
obj.setTitle("My Button");;
obj.setSize(500,400);
 obj.setVisible(true);
}
}