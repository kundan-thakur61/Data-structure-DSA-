#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insert_1st(struct node *start,int data);
struct node *insert_2nd( struct node *start,int data);
void merge(struct node *p1,struct node *p2);
void display(struct node *start);
int main()
{
    struct node *start1=NULL,*start2=NULL;
    start1=create(start1);
    start2=create(start2);
    printf("list 1 is\t:");display(start1);
    
    printf("list2 is \t:");  display(start2);
  
    merge(start1,start2);

}

void merge(struct node *p1,struct node *p2)
{
    struct node *start3;
    start3=NULL;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->info<p2->info)
        {
            start3=insert_2nd(start3,p1->info);
            p1=p1->link;
        }
        else if(p2->info<p1->info)
        {
            start3=insert_2nd(start3,p2->info);
            p2=p2->link;
        }
        else if(p1->info==p2->info)
        {
            start3=insert_2nd(start3,p1->info);
            p1=p1->link;
            p2=p2->link;
        }
    }
    while (p1!=NULL)
    {
       start3=insert_2nd(start3,p1->info);
       p1=p1->link;
    }
    while (p2!=NULL)
    {
       start3=insert_2nd(start3,p2->info);
       p2=p2->link;
    }
    printf("merge list..");
    display(start3);
}
struct node *create(struct node *start)
{
    int i,n,data;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    start=NULL;
   for(i=1;i<=n;i++)
   {
    printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_1st(start,data);
   }
   return start;
}
struct node *insert_1st(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    if(start==NULL||data<start->info)
    {
        temp->link=start;
        start=temp;
         return start;
    }
    else{
        p=start;
        while (p->link!=NULL&&p->link->info<data)
        {
           p=p->link;
           temp->link=p->link;
           p->link=temp;
        }
        return start;
    }
   
}

struct node *insert_2nd( struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node ));
    temp->info=data;
    if(start==NULL)
    {
        temp->link=start;
        start=temp;
        return temp;

    }
    else{
        p=start;
        while (p->link!=NULL)
        
            p=p->link;
            p->link=temp;
            temp->link=NULL;
            
        
        return start;
        
    }
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty...");
        return;
    }
    p=start;
    while (p!=NULL)
    {
       printf("%d\t",p->info);
       p=p->link;
    }
    printf("\n");
}