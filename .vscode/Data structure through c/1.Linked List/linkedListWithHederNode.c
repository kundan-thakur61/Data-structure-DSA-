#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *link; 
};
struct node *create_list(struct node *head);
void display(struct node *head);
struct node *addAtEnd(struct node *head,int data);
struct noode *addAtBefore(struct node *head,int data,int item);
struct noode *addAtPos(struct node *head,int data,int pos);
struct node *del(struct node *head,int data);
struct node *reverse(struct node *head);
int main()

{
    int choice,data,item,pos;
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->info=data;
    head->link=NULL;
    head=create_list(head);
    while(1)
    {
        printf("1.Display..\n");
        printf("2. Add At End \n");
        printf("3.Add At Before\n");
        printf("4.Add At postion\n");
        printf("5.Delete\n");
        printf("6.Reveres\n");
        printf("7.Quit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        display(head);
            break;
        case 2:
        printf("Enter the element to insert: \n");
        scanf("%d",&data);
        head=addAtEnd(head,data);
        break;
        case 3:
        printf("Enter the element to insert: \n");
        scanf("%d",&data);
        printf("enter the element before which to insert\n");
        scanf("%d",&item);
        head=addAtBefore(head,data,item);
        break;
        case 4:
        printf("Enter the element to insert: \n");
        scanf("%d",&data);
        printf("enter the position at which to insert\n ");
        scanf("%d",&pos);
        head=addAtPos(head,data,pos);
        break;
        case 5:
        printf("enter the element to be deleted\n");
        scanf("%d",&data);
        head=del(head,data);
        break;
        case 6:
        head=reverse(head);
        break;
        case 7:
        exit(1);
        default:
        printf("Wrong choice\n");
            break;
        }
    }
}
struct node *create_list(struct node *head)
{
    int i,n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        head=addAtEnd(head,data);

    }
    return head;

}
void display(struct node *head)
{
    struct node *p;
    if(head->link==NULL)
    {
        printf("list is empty\n");
        return;
    }
    p=head->link;
    printf("list is........\n");
    while (p!=NULL)
    {
       printf("%d",p->info);
       p=p->link;
    }
 printf("\n");
}

struct node *addAtEnd(struct node *head,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node)) ;
    temp->info=data;
    p=head;
    while (p->link!=NULL)
    { 
        p=p->link;
    p->link=temp;
    temp->link=NULL;
    }
    return head;
}

struct noode *addAtBefore(struct node *head,int data,int item)
{
    struct node *p,*temp;
    p=head;
    while (p->link!=NULL)
    {
        if(p->link->info==item)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info=data;
            temp->link=p->link;
            p->link=temp;
            return head;
        }
        p=p->link;
    }
    printf("%d is not present in the list\n",item);
    return head;
    
}

struct noode *addAtPos(struct node *head,int data,int pos)
{
    struct node *temp,*p;
    int i;
    temp=(struct node *)malloc(sizeof(struct node));
    p=head;
    temp->info=data;
    for(i=1;i<=pos-1;i++)
    {
        p=p->link;
        if(p==NULL)
        {
            printf("there is less than %d element\n",pos);
            return head;
        }
    }
    temp->link=p->link;
    p->link=temp;
    return head;
}

struct node *del(struct node *head,int data)
{
struct node *temp,*p;
p=head;
while (p->link!=NULL)
{
    if(p->link->info==data)
    {
        temp=p->link;
        p->link=temp->link;
        free(temp);
        return head;
    }
    p=p->link;
}
printf("element %d not found \n",data);
return head;
}

struct node *reverse(struct node *head)
{
   struct node *prev,*next,*ptr;
    prev=NULL;
    ptr=head->link;
    while (ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    head->link=prev;
    return head;
    
}