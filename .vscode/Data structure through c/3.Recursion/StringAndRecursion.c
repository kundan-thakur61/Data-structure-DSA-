/*.............length of string...........*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int length(char *strs);
void display(char *str1);
void Rdisplay(char *str1);
int main()
{   
     char str[100];
    printf("enter a string\n");
    gets(str);
    char p;
    p=length(str);
    printf("%d\n",p);
    display(str);
     Rdisplay(str);
    
}
int length(char *strs)
{
    if(*strs=='\0')
    return 0;
    else
    return(1+length(strs+1));
    
}
void display(char *str1)
{
    if(*str1=='\0')
    return;
    else
    putchar(*str1);
    display(str1+1);
    printf("\t");
}
void Rdisplay(char *str1)
{
    if(*str1=='\0')
    return;
    else
    Rdisplay(str1+1);   
     putchar(*str1);
      


}