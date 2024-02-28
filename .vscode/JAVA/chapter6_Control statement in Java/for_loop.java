public class for_loop {
public static void main(String args[])
{
    int i;
    //case 1:
    /*for(i=1;i<=10;i++)
    {
        System.out.println(i);
    }*/
    // case 2:
    /*i=1;
    for(;i<=10;i++)
    {
 System.out.println(i);
    }*/
    // case 3 :
   /*i=1;
for(; ;i++)
{
     System.out.println(i);
     if(i>=10)
     break;
}*/
// case 4:
 /*i=1;
for(; ; )
{
 System.out.println(i++);
 if(i>10)
 break;
}
*/
int j;
for(i=1,j=5;i<=5;i++,j--)
{
     System.out.println(i+" "+j);
}

}
}
