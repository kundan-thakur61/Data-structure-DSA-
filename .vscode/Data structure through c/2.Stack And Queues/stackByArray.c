#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
void push(int data);
int pop();
int peek();
int isEmpty();
int isFull();
void display();
int main()
{
    int choice,data;
    while(1)
    {
       printf("1.push\n");
       printf("2.pop\n");
       printf("3.display the element at top\n");
       printf("4.display all element in the stack\n");
       printf("5.Quit\n");
       printf("enter your choice\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1:
        printf("enter the data to be push:\n");
        scanf("%d",&data);
        push(data);
        break;
        case 2:
        data=pop();
        printf("popped data is:%d\n",data);
        break;
        case 3:
        printf("data at the top:%d",peek());
        break;
        case 4:
        display();
        break;
        case 5:
        exit(1);
       default:
       printf("wrong choice\n");
        
       }

    }
    
}
/*..................operation................*/
void push(int data)
{
    if(isFull())
    {
        printf("stack is overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

int pop()
{
    int data;
    if(isEmpty())
    {
        printf("stack is underflow\n");
        exit(1);
    }
    top=top-1;
    data=stack_arr[top];
    return data;
}
int peek()
{
    if(isEmpty())
    {
        printf("stack is underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isFull()
{
    if(top==MAX-1)
    return 1;
   else
    return 0;
}
void display()
{
    if(isEmpty())
    {
        printf("stack is overflow");
        return;
    }
    printf("all element in the stack:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack_arr[i]);
    }
    printf("\n");
}