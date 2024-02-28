#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int DEQUeue[MAX];
int front=-1;
int rear=-1;
void insertAtRearEnd(int item);
void inserAtFrontEnd(int item);
int DeleteRearEnd();
int DeleteFrontEnd();
void display();
int isEmpty();
int isFull();
int main()
{
    int choice ,item;
    while(1)
    {
printf("1.inset at front end\n");
printf("2.insert at rear end\n");
printf("3.delete from rear end\n");
printf("4.delete from front end\n");
printf("5.display\n");
printf("6.exit\n");
printf("enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("enter the element to insert at front end\n");
    scanf("%d",&item);
    inserAtFrontEnd(item);
    break;
    case 2:
    printf("enter the element to be insert at rear end\n");
    scanf("%d",item);
    insertAtRearEnd(item);
    break;
    case 3:
    printf("deleted element from rear end is :%d\n",DeleteFrontEnd());
    break;
    case 4:
    printf("deleted element from rear end is:%d\n",DeleteRearEnd());
    break;
    case 5:
    display();
    break;
    case 6:
    exit(1);
    break;
    default:
    printf("wrong chooice\n");
}
printf("fron=%d ,rear=%d\n",front,rear);
display();
    }
}

void inserAtFrontEnd(int item)
{
    if(isFull())
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
    {
    front=0;
    rear=0;
    }
    else if(front==0)
    front=MAX-1;
    else
    front=front-1;
    DEQUeue[front]=item;
}
void insertAtRearEnd(int item)
{
    if(isFull())
    {
        printf("queue is full\n");
        return;
    }
    if(front==-1)
    {
    front=0;
    rear=0;
    }
    else if(rear==MAX-1)
    rear=0;
    else
     rear=rear+1;
    DEQUeue[rear]=item;
}
int DeleteFrontEnd()
{
    int item;
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        exit(1);
    }
item=DEQUeue[front];
if(front==rear)
{
    front=-1;
    rear=-1;
}
else if(front==MAX-1)
front=0;
else 
front=front+1;
return item;
}
int DeleteRearEnd()
{
    int item;
    if(isEmpty())
    {
        printf("queue is full \n");
        exit(1);
    }
    item=DEQUeue[rear];
    if(front==rear)
    {
        front-1;
        rear=-1;
    }
    else if(rear==0)
    rear=MAX-1;
    else 
    rear=rear-1;
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
    if(front==0&&rear==MAX-1||front==rear+1)
    return 1;
    else
    return 0;
}
void display()
{
    int i;
    if(isEmpty())
    {
        printf("qqueue is empty\n");
        return;

    }
    printf("queue element is:\n");
    i=front;
    if(front<=rear)
    {
        while(i<=rear)
        printf("%d\t",DEQUeue[i++]);
    }
    else{
        while(i<=MAX-1)
        printf("%d\t",DEQUeue[i++]);
        i=0;
        while (i<=rear)
            printf("%d\t",DEQUeue[i++]);
        
    }
    printf("\n\n"); 
}