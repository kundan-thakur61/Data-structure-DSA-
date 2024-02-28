#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int CQ_arr[MAX];
 int front =-1;
int rear=-1;
void display();
void insert(int item);
int del();
int peek();
int isEmpty();
int isFull();
int main()
{
    int choice ,item;
    while(1)
    {
        printf("1.insert\n");
        printf("2.Delete \n");
        printf("3.peek \n ");
        printf("4.Display\n");
        printf("5.Quit \n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the element to be insert\n");
            scanf("%d",&item);
            insert(item);
            break;
            case 2:
            printf("element deleted: %d\t",del());
            break;
            case 3:
            printf("element at the front is:%d\t",peek());
            break;
            case 4:
            display();
            break;
            case 5:
            exit(1);
            default:
            printf("wrong choice\n");
        }
        printf("front=%d,rear=%d\n",front,rear);
        display();
    }
}

void insert(int item)
{
    if(isFull())
    {
        printf("Queue is overflow\n");
         return;
    }
    if(front==-1)
    front=0;
    if(rear==MAX-1)
    rear=0;
    else 
    rear=rear+1;
    CQ_arr[rear]=item;
}
int del()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        exit(1);
    }
    int item=CQ_arr[front];

    if(front==rear)
    {
    front=-1;
    rear=-1;
    }
    else if(front==MAX-1)
    front=0;
    else
    front =front+1;
    return item;

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
   if(front==0 && rear==MAX-1 || front==rear+1)
   return 1;
   else 
   return 0;
}
int peek()
{
    if(isEmpty())
    {
        printf("queue underflow\n");
        exit(1);
    }
    return CQ_arr[front];
}
void display()
{
    int i;
    if(isEmpty())
    {
        printf("queue is empty\n");
        return ;
    }
    printf("queue element is \n");
    i=front;
    if(front<=rear)
    {
        while (i<=rear)
        {
            printf("%d\t",CQ_arr[i++]);
        }
        
    }
    else{
        while(i<=MAX-1)
         printf("%d\t",CQ_arr[i++]);
         i=0;
         while (i<=rear)
         
                printf("%d\t",CQ_arr[i++]);
            
         
         
    }
    printf("\n\n");
}
























