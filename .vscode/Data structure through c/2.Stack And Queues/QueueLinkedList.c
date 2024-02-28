#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
}*front=NULL,*rear=NULL;
void insert(int item);
int del();
int peek();
void display();
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
        
        printf("deleted item is %d\n= ",del());
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
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory is not availabe");
        return;
    }
     temp->info=item;
     
     while (temp->link!=NULL)
     {
    temp->link=NULL;
    if(front==NULL)
    front=temp;
    else
    rear->link;
    rear=temp;
     }
}
int del()
{
    struct node *temp;
    int item;
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        exit(1);

    }
    temp=front;
    item=temp->info;
    free(temp);
    return item;
}
int peek()
{
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        exit(1);

    }
    return front->info;
}
int isEmpty()
{
    if(front==NULL)
    return 1;
    else
    return 0;
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        return;

    }
    printf("Queue is empty\n");
    while (ptr!=NULL)
    {
       printf("%d\t",ptr->info);
       ptr=ptr->link;
    }
    printf("\n\n");
}