#include<stdio.h>
#include<stdlib.h>
#define Maxs 10
int Queue_Arr[Maxs];
int front=-1;
int rear=-1;

void insert(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();
int main()
{
int choice,item;
while (1)
{
    printf("1.insert the element in Queue\n");
    printf("2.delete\n");
    printf("3.display at the front\n");
    printf("4.display all the element\n");
    printf("5.Quit\n");
    printf("enter your choice \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       printf("enter your element to be insert\n");
       scanf("%d",&item);
       insert(item);
        break;
        case 2:
        item=delete();
        printf("deleted item is %d= ",item);
        break;
    case 3:
    printf("display at the front %d\n",peek());
    break;
    case 4:
    display();
    break;
    case 5:
    exit(1);
    default:
    printf("wrong choice\n");
        break;
    }
}
}
void insert(int item)
{
    if(isFull)
    {
        printf("queue is overflow\n");
        return;
    }
    if(front==-1)
    front =0;
    rear=rear+1;
    Queue_Arr[rear]=item;
}
int delete()
{
    int item;
    if(isEmpty())
    {
        printf("Queue is empty\n");
        exit(1);

    }
    item=Queue_Arr[front];
    front =front+1;
    return item;

}
int peek()
{
     if(isEmpty())
    {
        printf("Queue is empty\n");
        exit(1);

    }
    return Queue_Arr[front];
}
int isEmpty()
{
    if(front==-1 || front==rear+1)
        return 1;
    else
    return 0;
}
int isFull()
{
    if(rear==Maxs-1)
    return 1;
    else 
    return 0;
}
void display()
{
    int i;
 if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d",Queue_Arr[i]);
    }
    printf("\n");
}