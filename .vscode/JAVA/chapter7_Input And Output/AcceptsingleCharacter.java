
/*import java.io.*;
 class AcceptsingleCharacter {
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        char ch=(char)br.read();
        System.out.println(ch);
    }
}
*/
import java.io.*;
class AcceptsingleCharacter{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter a single character");
        char ch=(char)br.read();
        System.out.println("you entered a single character:"+ch);
    } 
}