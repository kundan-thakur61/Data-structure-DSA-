#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int info;
    struct node *link;

};
struct node *insert_At_Beg(struct node *start,int data);
void display(struct node *start);
void bubbleSortByExchanging(struct node *start);
int main()
{
    struct node *start=NULL;
    int choice,data;
    while (1)
    {
        printf("1.insert\n");
        printf("2.display\n");
        printf("3.bubble sort by exchanging data\n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=insert_At_Beg(start,data);
            break;
            case 2:
            display(start);
            break;
            case 3:
            bubbleSortByExchanging(start);
            break;
        case 4:
        exit(1);
        default:
        printf("wrong choice\n");
            break;
        }
    }
    
}

struct node *insert_At_Beg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    
    temp->link=start;
    start=temp;
    return start;

}
void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty");
        return;

    }
   p=start;
    printf("list is\n");
    while (p!=NULL)
    {
   printf("%d\t",p->info);
    p=p->link;
    }
 printf("\n\n");

}
void bubbleSortByExchanging(struct node *start)
{
    struct node *p,*q,*end;
    int temp;
    for(end=NULL;end!=start->link;end=q)
    {
        for(p=start;p->link!=end;p=p->link)
        {
                q=p->link;
                if(p->info>q->info)
                {
                    temp=p->info;
                    p->info=q->info;
                    q->info=temp;
                }
        }
    }
}