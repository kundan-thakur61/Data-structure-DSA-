#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;

};
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void display(struct node *start);
int main()
{
    struct node *start =NULL;
       int data;
    start=create_list(start);
    
        printf("enter the element to be insert in at the begnning\n");
        scanf("%d",&data);
        start=addatbeg(start,data);

    
        
      printf("enter the element to be insert in at the end\n");
      scanf("%d",&data);
      start=addatend(start,data);
     display(start);

   
}
struct node *create_list(struct node *start)
{

        int i,data,n;
        printf("enter the number of node:\n");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
        return start;
        printf("enter the element to be insert:\n");
        scanf("%d",&data);
        start=addatbeg(start,data);
        for(i=2;i<=n;i++)
        {
        printf("enter the element to be insert:\n");
        scanf("%d",&data);
        start=addatend(start,data);
        }
        return start;
    }

struct node *addatend(struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->link!=NULL)
        {
         // p->link=temp;
        // temp=NULL;
        p=p->link;
        p->link=temp;
        temp->link=NULL;
        return start;
        }
    }
    
struct node *addatbeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info;
    temp->link=start;
    start=temp;
    return start;
}//end of addatbeg
void display(struct node *start)
{
    struct node *p;
    if(p==start)
    {
        printf("list is empty\n");
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