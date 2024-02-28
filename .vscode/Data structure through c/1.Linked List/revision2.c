#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *inserts(struct node *start,int data);
void display();
struct node *start=NULL;

int main()
{
    int data;
    for(int i=0;i<5;i++)
    {
    printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=inserts(start,data);
    }
    display();
}
struct node *inserts(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while(p->link!=NULL)
    {
    p=p->link;
        p->link=temp;
        temp->link=NULL;
    
        return start;
    }
}


	void display()
	{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("list is:\n");
    p=start;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->link;
    }
	}