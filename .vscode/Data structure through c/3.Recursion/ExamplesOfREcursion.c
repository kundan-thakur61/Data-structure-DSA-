/*.............1.FACTORIAL..................*/
/*#include<stdio.h>
long int fact(int num);
int main()
{
    int n;
    printf("enter the integers:\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("negetive number has no factorial");
    }
    else 
    {
        printf("%d!=%d",n,fact(n));
    }
}
long int fact(int num)
{
    if(num==0)
    return 1;
    else
    return(num*fact(num-1));
}*/
/*..............2.Summation of nuumbers from 1 to n ..................*/
/*#include<stdio.h>
long int sum(int num);
int main()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    printf("the summation of %d=%d",n,sum(n));
}
long int sum(int num)
{
    if(num==0)
        return 0;
        else 
        return(num+sum(num-1));
    
}*/
/*.............3.Displaying numbers  from 1 to n ..................*/
/*#include<stdio.h>
void display(int num);
void display1(int num)
{
if(num==0)
return ;
display1(num-1);
printf("%d",num);
}
int main()
{
    int n;
    printf("enter the numbers:\n");
    scanf("%d",&n);
    display(n);
    display1(n);
}
void display(int num)
{
    if(num==0)
    return;
    printf("%d\t",num);
    display(num-1);
}
*/

/*.............4.Display and Summation of series..................*/
/*#include<stdio.h>
long int sumDisplay(int n);
int main()
{
    int num;
    printf("enter the numbers:");
    scanf("%d",&num);
    printf("%d", sumDisplay(num));
}
long int sumDisplay(int n)
{
    if(n==0)
    return 0;

    int sum;
    sum=n+sumDisplay(n-1);
    printf("%d+",n);
    return sum;
    
}
*/
/*5.sum of digits if an integers and displaying  an integers as sequence of characters*/
/*
#include<stdio.h>
int sumdigits(long int n)
{
    if(n/10==0)
    return n;
    return n%10+sumdigits(n/10);
}
void display(long int n)
{
    if(n/10==0)
    {
        printf("%d",n);
        return;
    }
    display(n/10);
    printf("%d",n%10);
}
void reverse(long int n)
{
    if(n/10==0)
    {
        printf("%d\t",n);
        return ;
    }
    printf("%d\t",n%10);
    reverse(n/10);
}
int main()
{
    int num;
    printf("enter the numbers\n");
    scanf("%d",&num);
   printf("%d=%d",num,sumdigits(num));
   printf("\n");
display(num);
reverse(num);
}
*/

/*.................6.base conversion...............*/
/*
#include<stdio.h>
void convert(int n,int base)
{
    int  rem=n%base;
    if(n==0)
    return;
    convert(n/base,base);
    if((rem<10))
    printf("%d",rem);
    else
    printf("%c",rem-10+'A');
}
int main()
{
    int num;
    printf("enter the numbers\n");
    scanf("%d",&num);
    convert(num,2);
    printf("\n");
    convert(num,8);
        printf("\n");

    // convert(num,10);
    convert(num,16);
    printf("\n");
    }
*/
/*.................7.Exponentiation of a float b a positive integer...............*/
#include<stdio.h>
float power(float a,int b);
int main()
{
float a,p;
int n;
printf("enter float number and integers\n");
scanf("%f%d",a,n);
p=power(a,n);
printf("%d raised to power %d is %f",n,a,p);
}
float power(float a,int b)
{
    if(b==0)
    return(1);
    else 
    return (a*power(a,b-1));
}












