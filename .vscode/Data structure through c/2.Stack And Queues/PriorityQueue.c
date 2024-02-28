#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    int priority;
    struct node *link;
} *start=NULL;
void insert(int item,int itemPriority);
void display();
int delete();
int isEmpty();
int main()
{
    int choice,item,itemPriority;
    while (1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.Quit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the element to insert\n");
            scanf("%d",&item);
            printf("enter its priority\n");
            scanf("%d",&itemPriority);
            insert(item,itemPriority);
            break;
            case 2:
            printf("deleted item is:%d\n",delete());
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            break;
        default:
        printf("wrong choice\n");
            break;
        }
    }
    
}

void insert(int item,int itemPriority)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory is not avialable\n ");
        return;
    }
    temp->info=item;
    temp->priority=itemPriority;
    if(isEmpty()|| itemPriority<start->priority)
    {
        temp->link=start;
        start=temp;

    }
    else
    {
        p=start;
        while (p->link!=NULL&&p->link->priority<=itemPriority)
        {
            p=p->link;
            temp->link==p->link;
            p->link=temp;
        }
        
    }
}
int delete()
{
    struct node *temp;
    int item;
    if(isEmpty())
    {
        printf("queue is underflow");
    exit(1);
    }
    else{
        temp=start;
        item=temp->info;
        start=start->link;
        free(temp);
    }
    return item;
}
int isEmpty()
{
    if(start==NULL)
    return 1;
    else 
    return 0;
}
void display()
{
    struct node *ptr;
    ptr=start;
    if(isEmpty())
        printf("qUEUE IS UNDERFLOW\n");
        else 
        printf("Queue is :\n");
        printf("priority item\n");
        while (ptr!=NULL)
        {
            printf("%d\t\t%d\n",ptr->info,ptr->priority);
            ptr=ptr->link;
        }
        
}











