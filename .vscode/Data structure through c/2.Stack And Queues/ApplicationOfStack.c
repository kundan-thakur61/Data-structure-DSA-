/*
1.Reversal of String
2.Checking validity of an expresssion containing nested parentheses
3.Function calls
4.Conversion of infix expression to postfix form
5.Evalution of postfix
*/

/*....................1.Reversal of String..................*/
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #define max 10
// int top=-1;
// char stack[max];
// void push(char);
// int pop();
// int main()
// {
//     char str[20];
//     unsigned int i;
//     printf("enter the String\n");
//     gets(str);
//     /*push character of the string str on the stack*/
//     for(i=0;i<strlen(str);i++)
//     push(str[i]);
//     /* pop character from the stack and store in string str*/
//     for(i=0;i<strlen(str);i++)
//     str[i]=pop();
//     printf("Reversed string is:");
//     puts(str);
// }
// void push(char item)
// {
//     if(top==max-1)
//     {
//         printf("stack is underflow\n");
//         return;
//     }
//     stack[++top]=item;

// }
// int pop()
// {
//     if(top==-1)
//     {
//         printf("stack is underflow\n");
//         exit(1);
//     }
//     return stack[top--];
// }


/*........2.Checking validity of an expresssion containing nested parentheses........*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(char );
char pop();
int match(char A,char B);
int check(char exp[])
{
    char temp;
for(int i=0;i<strlen(exp);i++)
{
    if(exp[i]=='('||exp[i]=='{'||exp[i]=='{')
    push(exp[i]);
    if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
    if(top==-1)
    {
        printf("right parenthesis are more han left parenthesis:");
       return 0;
    }
    else
    {
        temp=pop();
        if(!match(temp,exp[i]))
        {
            printf("mismatch parenthesis are:\n");
            printf("%c and %c",temp,exp[i]);
            return 0;
        }
    }

}
if(top==-1)
{
printf("balanced parenthesis\n");
return 1;
}
else
{
printf("left parenthesis is more then right parenthesis\n");
return 0;
}

}
int main()
{
    char exp[MAX];
    int valid;
    printf("enter the expression\n");
    gets(exp);
    valid=check(exp);
    if(valid==1)
    {
        printf("valid expressin\n");

    }
    else
    {
        printf("invalid expression");
    }

}

int match(char A,char B){
    if(A=='(' && B==')')
    return 1;
    if(A=='{'&& B=='}')
    return 1;
    if(A=='['&& B==']')
    return 1;
    return 0;
    
}

void push(char item ){
    if(top==MAX-1)
    {
        printf("stck is overflow\n");
        return;
    }
    top=top+1;
    stack[top]==item;

}
char pop()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
        exit(1);

    }
    return(stack[top--]);
}






























































































