
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int c_Queue[MAX];
int front=-1;
int rear=-1;
void display();
void insert(int item);
int del();
int peek();
int isEmpty();
int isFull();
int main()
{
    int choice,item;
    while(1)
    {
    printf("1.INERT\n");
    printf("2.delete\n");
    printf("3.display at the top\n");
    printf("4.display all element\n");
    printf("5.Quit\n");
    printf("emter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("enter the lement to be insert\n");
    scanf("%d",&item);
    insert(item);
    break;
    case 2:
    printf("deleted item is:%d",del());
    break;
    case 3:
    printf("element at the top=%d",peek());
break;
case 4:
display();
break;
case 5:
exit(1);
break;
default:
printf("wrong choice\n");
    }
}
}

void insert(int item)
{
    if(isEmpty)
    {
        printf("Queue is empty\n");
        return;
    }
    if(front==-1)
    front =0;
    if(rear==MAX-1)
    rear=0;
    else
    rear=rear+1;
    c_Queue[rear]=item;
}

int del()
{
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        exit(1);
    }

int item=c_Queue[front];
if(front==rear)
front=rear+1;
else if(front==MAX-1)
front=0;
else
front=front+1;
return item;
}
int peek()
{
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        exit(1);
    }
    return c_Queue[front];
}
int isEmpty()
{
    if(front==-1)
    return 1;
    else 
    return 0;
}
int isFull()
{
    if((front==0  && rear==MAX-1)||front==rear+1)
    return 1;
    else 
    return 0;
}

void display()
{
    int i;
    if(isEmpty)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is:\n");
     i=front;
    if(front <=MAX-1)
    {
    while(i<=MAX-1)
    printf("%d",c_Queue[i++]);
    }
    else
    {
        while(i<=MAX-1)
        printf("%d",c_Queue[i++]);
        i=0;
        while(i<=rear)
        printf("%d",c_Queue[i++]);
    }
    printf("\n");
}