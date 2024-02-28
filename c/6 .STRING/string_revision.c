/*#include<stdio.h>
int main(){
    printf("%d\n","good");
     printf("%d\n","good");
     if("bad"=="bad")
     {
        printf("same\n");
     }
     else{
        printf("not same");
     }
}*/

// Q.2:program to print charecter of a string and address of each character 
#include<stdio.h>
/*int main()
{
    char str[]={'h','a','p','p','y'};
    for(int i=0;str[i]!='\0';i++)
    {
        printf("character=%c\t",str[i]);
       
          printf("address=%u\n",&str[i]);
    }
}*/
// Q.2:program to print charecter of a string and address of each character 
/*#include<stdio.h>
// #include<string.h>
int main()
{
    char str[]="india";
    char *p=str;

    while(*p!='\0')
    {
        printf("character =%c\t",*p);
        printf("address =%u\n",p);
        p++;

    }
}*/
// Q.no3:program to input and output a string variable using scanf()
/*#include<stdio.h>
int main()
{
    int str[10];
    scanf("%s",str);
    printf("%s\n",str);
    printf("%s\n","Thakur");
}*/
// Q.no3:program to understand gets() and puts()
/*
#include<stdio.h>
// #include<string.h>
int main()
{
    char str[10];
    gets(str);
    puts(str);
   
}*/ 
/*STRING LIBRARY FUNCTION 
1.strlen()
2.strcmp()
3.strcpy()
4.strcat()
*/
/*........1.strlen().........*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    printf("enter the string :\n");
    scanf("%s",arr);
    int leng=strlen(arr);
    printf("the length of string:%d",leng);
}*/
/*........1.strcmp().........*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("enter the 1st string :\n");
    scanf("%s",str1);
printf("you are enter 1st string: %s\n\n",str1);

    printf("enter the 2nd string :\n");
    scanf("%s",str2);
printf("you are enter 2nd string: %s\n\n\n",str2);

if(strcmp(str1,str2)==0)
{
    printf("strings are same...");

}
else
{
printf("strings are not same...");
}
}*/

/*........1.strcpy().........*/
/*#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
     printf("enter the 1st string :\n");
    scanf("%s",str1);
// printf("you are enter 1st string: %s\n\n",str1);

    printf("enter the 2nd string :\n");
    scanf("%s",str2);
// printf("you are enter 2nd string: %s\n\n\n",str2);
 
 strcpy(str1,str2);

 printf("1st string is:%s \t string is :%s\n",str1,str2);
 strcpy(str1,"kundan");
  strcpy(str1,"thakur");
  
 printf("1st string is:%s \t string is :%s\n",str1,str2);

}*/

/*................4.strcat()...................*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("enter the 1st string :\n");
    scanf("%s",str1);
printf("you are enter 1st string: %s\n\n",str1);

    printf("enter the 2nd string :\n");
    scanf("%s",str2);
printf("you are enter 2nd string: %s\n\n\n",str2);
strcat(str1,str2);
printf(": %s\n\n\n ",str1);
}*/

/*...........string pointer..............*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ptr;
    ptr=(char*)malloc(10);
printf("enter a string :\n");
scanf("%s",ptr);
printf("%s",ptr);
}*/
/*...........array of string or two dimensional array of characters..............*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char arr[10][10]={
        "kundan",
        "thakur",
        "appple",
        "applessss"
        };
    for(int i=0;i<10;i++)
    {
        printf("string=%s\t",arr[i]);
         printf("adress of string=%u\n",arr[i]);
    }
}*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char arr[10][10]={
        "white",
        "red",
        "green",
        "yellow"
        "blue"
        };
        char temp[10];
        printf("before sorting:\n");
        for(int i=0;i<10;i++)
        {
            printf("%s",arr[i]);
            printf("\n");
        }
        for(int i=0;i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if(strcmp(arr[i],arr[j])>0)
                {
                    strcmp(temp,arr[i]);
                    strcmp(arr[i],arr[j]);
                    strcmp(arr[j],temp);
                }
            }
            }
            printf("after sorting:\n");
            for(int i=0;i<10;i++)
            {
            printf("%s",arr[i]);
            printf("\n");
            }
}*/

/*       sprintf() and sscanf()*/
/*program to convert integer and float values to string using sprintf() function*/

/*#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    int x= 22;
    float y=36.78;
    sprintf(str1,"%d",x);
     sprintf(str2,"%.2f",y);
     printf("str1=%s\t str2=%s\n",str1,str2);
}


#include<stdio.h>
int main()
{
    char str[20];
    char name[20]={"kundan"};
    int x1= 20,x2=40,x3=50;
    float per=(x1+x2+x3)/3.0;
    char grade ='A';
    
     sprintf(str,"RESULT-%s\t%d\t%d\t%d\t%2.f%c",name,x1,x2,x3,per,grade);
     printf("string is :\n");
     puts(str);
}*/

// sscanf()

/*program to cinvert string t integer and float values*/
/*#include<stdio.h>
int main()
{
    char str1[20]="1024";
    char str2[20]="24.36";
    int x;
    float y;
    sscanf(str1,"%d",&x);
    sscanf(str2,"%.2f",&y);
    printf("the value of x=%d and the value of y=%f",x,y);

}*/





/*........................some additional problems.........................................*/
/*Q1program to test ehether a word is pakindrome or not */
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int maint()
{
   char str[20];
   int i=0,j,flage;
   printf("enter the string :");
   scanf("%s",str);
    j=strlen(str)-1;
   while(i<=j)
   {
    if(str[i]==str[j])
    {
        flage=1;
    }
    else
    {
        flage=0;
        break;

    }
    i++;
    j--;

   }
if(flage==1)
{
    printf("string is palindrome:\n");

}
else{
    printf("string is not  palindrome:\n"); 
}
}*/
/*Q2.write a program convert string into uppercase */
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20];
    int i=0;
    printf("enter the string in lowercase ");
    scanf("%s",str);
    while (str[i]!='\0')
    {
       str[i]=str[i]-32;
       i++;
    }
    printf("the uppercase string is :%s\n",str);
    
}*/
/*Q2.program to enter any string and print it in reverse order*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20];
    int len ;
    printf("enter the string :\n ");
    scanf("%s",str);
len=strlen(str)-1;
while(len>=0)
{
    printf("%c",str[len]);
    len--;
}
printf("\n");
}*/
/*Q2.program to accept any line and count the number of words in it*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,i=0;
    printf("enter the line of text:\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
        count++;
        i++;

        }
    }
        if(str[i]=='\0')
        count++;
        printf("the number of word in line =%d\n",count);
    

}*/

