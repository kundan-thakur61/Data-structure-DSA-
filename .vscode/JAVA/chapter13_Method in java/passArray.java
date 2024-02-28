import java.io.*;
import java.util.*;
class Matrix
{
    int arr[][];
    int r,c;
    Matrix(int r,int c)
    {
        this.r=r;
        this.c=c;
         arr= new arr[r][c];
    }
int[][] getMatrix()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
StringTokenizer st;

for(int i=0;i<r;i++)
{
     String s=br.readLine();
        st=new StringTokenizer(s," ");
         for(int j=0;j<c;j++)
    arr[i][j]=Integer.parseInt(br.readLine());
}
return arr;
}
}
int [][] findSum(int a[][],int b[][])
{
    int [][]temp=new temp[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    temp[i][j]=a[i][j]+b[i][j];
    return temp;
}
void Display(int res[][])
{
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++) 
    {
        System.out.println(res[i][j]+"\t");
    }
    System.out.println( );
}
}
public class passArray {
    public static void main(String[] args)
    throws IOException
    {
        Matrix obj1=new Matrix(3,3);
        Matrix obj2=new Matrix(3, 3);
        int x[][],y[][],z[][];
System.out.println("\nenter the element of 1st MAtrix\n");
 x=obj1.getMatrix();
 System.out.println("\nenter the element of 2nd MAtrix\n");
y=obj2.getMatrix();

z=obj1.findSum(x,y);
System.out.println("sum of MAtrix");
obj2.Display(z);

    }
    

