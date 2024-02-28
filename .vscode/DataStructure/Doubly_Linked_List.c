
#include<stdio.h>
#include<stdlib.h>
struct node {
struct node *prev;
int info;
struct node *next;
};
struct node *create_list(struct node *start);
void display(struct node *start);
struct node *AddToEmpty(struct node *start,int data);
struct node *AddAtBeg(struct node *start,int data);
struct node *AddAtEnd(struct node *start,int data);
struct node *AddAfter(struct node  *start ,int data,int item);
struct node *AddBefore(struct node *start,int data,int item);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start );
int main()
{
    int choice,data,item;
    struct node *start=NULL;
    while(1)
    {
        printf("1.create list\n");
        printf("2.Display\n");
        printf("3.add to empty list\n");
        printf("4.add at begnning\n");
        printf("5.add at end\n");
        printf("6.add after\n");
        printf("7.add before\n");
        printf("8.delete\n");
        printf("9.reverse\n");
        printf("10.quit\n\n");


        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        start=create_list(start);
            break;
            case 2:
            display(start);
        break;
        case 3:
        printf("enter the element to be inserted:");
        scanf("%d",&data);
        start=AddToEmpty(start,data);
        break;
        case 4: 
        printf("enter the element to be inserted:");
        scanf("%d",&data);
        start=AddAtBeg(start,data);
        break;
        case 5:
         printf("enter the element to be inserted:");
        scanf("%d",&data);
        start=AddAtEnd(start,data);
        break;
        case 6:
         printf("enter the element to be inserted:");
        scanf("%d",&data);
        printf("enter the element after which to insert");
        scanf("%d",&item);
        start=AddAfter(start,data,item);
        break;
        case 7:
         printf("enter the element to be inserted:");
        scanf("%d",&data);
        printf("enter the element after which to insert");
        scanf("%d",&item);
        start=AddAfter(start,data,item);
        break;
        case 8:
         printf("enter the element to be deleted:");
        scanf("%d",&data);
        start=del(start,data);
        break;
        case 9:
        start=reverse(start);
        break;
        case 10:
        exit(1);

        default:
            break;
        }
    }
}
void display( struct node *start)
{
struct node *p;
if(start==NULL)
{
    printf("List is empty\n");
    return;
}
p=start;
printf("List is:\n");
while (p!=NULL)
{
printf("%d\t",p->info);
p=p->next;
  
}
printf("\n\n");

}

struct node *AddAtBeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->prev=NULL;
    temp->next=start;
    start->prev=temp;
    start=temp;
    return start;

}
struct node *AddToEmpty(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->prev=NULL;
    temp->next=NULL;
    start=temp;
    return start;
}
struct node *AddAtEnd(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->next!=NULL)
    {
       p= p->next;
        p->next=temp;
       temp->next=NULL;
       temp->prev=p;
      return start ;
    }
    
}

struct node *AddAfter(struct node  *start ,int data,int item)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p!=NULL)
    {
        if(p->info==item)
        {
            temp->prev=p;
            temp->next=p->next;
            if(p->next!=NULL)
            {
                p->next->prev=temp;
                p->next=temp;
                return start;
            }
        }
    p=p->next;
    }
    printf("%d is not present in the list\n",item);
    return start;
}
struct node *AddBefore(struct node *start,int data,int item)
{
    struct node *temp,*q;
    if(start==NULL)
    {
        printf("list is empty\n");
        return start;

    }
    if(start->info==item)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=data;
        temp->prev=NULL;
        temp->next=start;
        start->prev=temp;
        start=temp;
        return start;
            }
            q=start;
            while (q!=NULL)
            {
                if(q->info==item)
                {
                    temp=(struct node*)malloc(sizeof(struct node));
                    temp->info=data;
                    temp->prev=q->prev;
                    temp->next=q;
                    q->prev->next=temp;
                    q->prev=temp;
                    return start;

                }
                q=q->next;
            }
            printf("%d no tpresent in the list\n",item);
            return start;
}
struct node *create_list(struct node *start){
    int i,n,data;
    printf("enter the number of Node:\n");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
    return start;
    printf("enter the element to be insert:\n");
    scanf("%d",&data);
    start=AddToEmpty(start,data);
    for(i=2;i<=n;i++)
    {
        printf("enter the element to be insert %d:",i);
        scanf("%d",&data);
        start=AddAtEnd(start,data) ;
    }
    return start;
}

struct node *del(struct node *start,int data)
{
    struct node *temp;
    if(start==NULL)
    {
        printf("List is empty:\n");
        return start;
    }
    if(start->next==NULL)   //deletion of only node
    if(start->info==data)
    {
        temp=start;
        start=NULL;
        free(temp);
        return start;
    }
    else{
        printf("element %d not found\n",data);
        return start;
    }
    if(start->info==data)
    {
        temp=start;
        start=start->next;
        start->prev=NULL;
        free(temp);
        return start;
    }
    temp=start->next;   //deletion in between  


while(temp->next!=NULL)
{
    if(temp->info==data)
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return start;
    }
    temp=temp->next;
}
if(temp->info==data)
    {
        temp->prev->next=NULL;
        free(temp);
        return start;
    }
    printf(" element %d not found\n",data);
    return start;
}
struct node *reverse(struct node *start ){
    struct node *p1,*p2;
    p1=start;
    p2=p1->next;
    p1->next=NULL;
    p1->prev=p2;
    while(p2!=NULL)
    {
        p2->prev=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p2->prev;
    }
    start=p1;
    printf("list is reversed\n");
    return start;
}