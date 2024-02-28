/* Q2.program to find the square root of any number
#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("enter the number");
    scanf("%f",&n);
    double s=sqrt(n);
    printf("the square root of %.2f \t is=%.2f",n,s);
    return 0;


}*/

/* Q3.program to draw a line
#include<stdio.h>
void drawline(); //function declaration
int main(){
    drawline();//function call
}
void drawline(){        //function defination
    for(int i=0;i<100;i++){
        printf("-");
    }
}*/

/* Q4.program to find the sum of two  numbers
#include<stdio.h>
int sum(int x,int y);   //function declaration
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int s=sum(a,b);         //function call
    printf("sum=%d",s);
  

}

int sum(int x,int y)    //function defination
{
    int sot=x+y;
    return sot;


}*/

/* Q5.program to check the number is odd or even

#include<stdio.h>
 void check(int n);
int main(){
    int num;
    printf("enter the value num=");
    scanf("%d",&num);
    check(num);
   
}
void check(int n)
{
   
if(n%2==0)
{
printf("even");
}
else{
printf("odd");
}
}*/

/* Q6.program to check number is greater of two number
#include<stdio.h>
int large(int x,int y);

int main(){
int a,b;
printf("enter the value of a,b");
scanf("%d%d",&a,&b);
int l=large(a,b);
printf("largest number is=%d",l);

}
int large(int x,int y){
    // if(x>y)
    // {
    //     return ( x+10);
    // }
    // else{
    //     return (y+10);
    // }
    return (x>y?x:y);
}*/

/* ************* RETURN STATEMENT ****************/
/*
DECLARATION:
return;
RETURN(EXPRESSION);
*/
/* Q7.program to UNDERSTAND the return statement

#include<stdio.h>
void select(int ages,float hts);
int main(){
    int age,ht;
    printf("enter your age and height");
    scanf("%d%f",&age,&ht);
    select(age,ht);
   
}
void select(int ages,float hts)
{
    if(ages>25)
    {
        printf("age should be less than 25");
        return;
    }
    if(hts<5)
    {
       printf("height should be more than 5");  
       return;
    }
    
    printf("selected\n");
}*/

/* Q6.program to find fsctorisl number
#include<stdio.h>
 long int fact(int n);
int main()
{
    int num;
    printf("enter the numbers:");
    scanf("%d",&num);
    int f=fact(num);
    printf("%d",f);

}
 long int fact(int n)
{
   int factorial=1; 
    if(n==0)
    {
        return 1;
    }

    for(int i=n;i>1;i--)
{
    factorial*=i;
   
}
 return (factorial);
}*/
 /*
#include<stdio.h>
int main(){
    int n;

 scanf("%d",&n);
   int  fact=1;

for(int i=n;i>1;i--){
    fact*=i;
}
printf("%d",fact);
return 0;
}*/


/* ************* function argument ****************/
/* Q7.program to UNDERSTAND the actual and formal argument

#include<stdio.h>
int multiply(int x,int y);
int sum(int x,int y);
int main(){
    int m=10;
    int n=10;
    printf("%d\n",multiply(m,n));
     printf("%d\n",multiply(m+n,m-n));
      printf("%d\n",multiply(15,4));
       printf("%d\n",multiply(5,sum(9,6)));
}
int multiply(int x,int y){
    int p=x+y;
    return p;
}
int sum(int x,int y){
    return x+y;
}*/
/*#include<stdio.h>
void af(int x,int y);
int main(){
    int a=9, b=6;
    af(a,b);
     af(a+b,a-b);
      af(a*(a-b),a/(a+b));

}
void af(int x,int y){
    printf("a=%d\t b=%d",x,y);
}*/

/* *************  types of function  ****************/
//Q.1: FUNCTION WITH NO ARGUMENTS AND NO RETURN VALUES
// Q.2: FUNCTION WITH NO ARGUMENTS BUT   RETURN VALUES
// Q.3: FUNCTION WITH  ARGUMENTS AND NO RETURN VALUES
// Q.4: FUNCTION WITH  ARGUMENTS AND  RETURN VALUES


//Q.1: FUNCTION WITH NO ARGUMENTS AND NO RETURN VALUES
/*#include<stdio.h>
void displaymenu(void);
int main(){
    int choice;
        scanf("%d",&choice);
    displaymenu();

   scanf("%d",&choice);
}
void displaymenu(void)
{
    
   printf("1.press for create database\n");
    printf("press'2' for create database\n");
     printf("press'3' for create database\n");  
}*/

// Q.2: FUNCTION WITH NO ARGUMENTS BUT   RETURN VALUES
/*
#include<stdio.h>
int square();
int main()
{
    int s=square();
    printf("%d\n",s);

}
int square(){
    int st=0;
    for(int i=1;i<=5;i++)
    {
    if(i%2!=0)
    st+=i*i; 
    }
    return st;
}*/


// Q.3: FUNCTION WITH  ARGUMENTS AND NO RETURN VALUES

#include<stdio.h>
#include <math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main(){
    float a, b, c;
    printf("enter the side of triangle");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c&&b<c+a&&c<b+a)
    { 
        type(a,b,c);
        area(a,b,c);
       
    }
    else
    {
        printf("there are not possible with sides ");

    }
}
  void type(float a,float b,float c)
  {
    if((a*a)+(b*b)==(c*c)||(c*c)+(b*b)==(a*a)||(a*a)+(c*c)==(a*a))
    {
        printf("trinagle is right angle trinangle\n");
    }
    else if (a==b&&b==c)
    {
        printf("the triangle is equilateral");

    }
    else if(a==b||b==c||c==a){
            printf("the triangle is isoseles");

    }
    else{
            printf("the triangle is scalene");
    }
  }
void area(float a,float b,float c){

    float s=(a+b+c)/2;
    float areaOfTriangle=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of primeter %2.f\n",s);
    printf("area of trinangle %2.f\n",areaOfTriangle);

}

// Q.3: FUNCTION WITH  ARGUMENTS AND RETURN VALUES
// to program to find the sum of digits
/*
#include<stdio.h>
int sumOfDigits(int n);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int sod=sumOfDigits(num);
    printf("%d",sod);


}
int sumOfDigits(int n)
{
    int rem,sum=0,sum1 =0;
    if(n==0)
    return -1;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        // sum1=sum1*10+rem;
        n=n/10;
    }
    return sum;


    }*/
    // to program to find the reverse and also  the number is palindrome or not;
/*
#include<stdio.h>
int reverse(int n);
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    // int sod=reverse(num);
    printf("%d\n",reverse(num));
    
if(num==reverse(num))
{
    printf("numer is palindrome\n");
}
else{
      printf("numer is not  palindrome\n");
}
}
int reverse(int n)
{
    int rem,sum =0;
    if(n==0)
    return -1;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;


    }*/
/* *************  LOCAL ,GLOBAL,AND STATIC VARIABLE  ****************/
/* 1.LOCAL VARIABLE
SYNTAX:

FUNC()
{
    INT A,B;
    ............
    ............

}

2.LOCAL VARIABLE
SYNTAX:

INT A,B;
INT MAIN()
{
   ...............
   ............... 
}

3.STATIC VARIABLE
SYNTAX:

FUNC()
{
    STATIC INT A;
    ............
}
*/


// TO program to understand to global variable
/*
#include<stdio.h>
void func1(void);
void func2(void);
int a=5,b=8;
int main()
{
    func1();
    func2();
}
void func1(void)
{
    printf("%d\t%d\n",a,b);
}
void func2(void)
{
     printf("%d\t%d\n",a,b); 
}

*/

// TO program to understand to static variable
/*#include<stdio.h>
void func1(void);

int main()
{
    func1();
        func1();
            func1();

}
void func1(void)
{
     int a=5;
    static int b=10;
    
    printf("a=%d\t b=%d\n",a,b);
    a++;
    b++;
}*/