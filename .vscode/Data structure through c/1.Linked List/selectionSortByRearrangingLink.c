#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int info;
    struct node *link;
};
struct node *insert_At_Beg(struct node *start,int data);
void display(struct node *start);
struct node *selectionSortByRearrging(struct node *start);
struct node *BubbleSortByRearrging(struct node *start);
int main()
{
    struct node *start=NULL;
    int choice,data;
    while (1)
    {
       printf("1.insert\n");
       printf("2.dispaly\n");
       printf("3.selectionSortByRearranging\n");
       printf("4.exit\n");
       printf("5.bubble sort by rearranging\n");
       printf("enter your choice\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1:
        printf("enetr the element to be insert\n");
        scanf("%d",&data);
        start=insert_At_Beg(start,data);
        break;
        case 2:
        display(start);
        break;
        case 3:
       start=selectionSortByRearrging(start);
        break;
        case 4:
        exit(1);
        break;
       case 5:
       start=BubbleSortByRearrging(start);
        break;
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
    printf("list is........\n");
    while (p!=NULL)
    {
       printf("%d\t",p->info);
       p=p->link;
    }
    printf("\n\n");
}


 struct node *selectionSortByRearrging(struct node *start)
{
    struct node *p,*r,*q,*s,*temp;
    for(r=p=start;p->link!=NULL;r=p,p=p->link)
    {
        for(s=q=p->link;q!=NULL;s=q,q=q->link)
        {
            if(p->info > q->info)
            {
                temp=p->link;
                p->link=q->link;
                q->link=temp;
                if(p!=start)
                r->link=q;
                s->link=p;
                if(p==start)
                start=q;
                temp=p;
               p=q;
              q=temp;

               
            }
        }
    }
    return start;
}

struct node *BubbleSortByRearrging(struct node *start)
{
    struct node *end,*p,*q,*r,*temp;
    for(end=NULL;end!=start->link;end=q)
    {
        for(r=p=start;p->link!=end;r=p,p=p->link)
        {
            q=p->link;
            if(p->info>q->info)
            {
              
                p->link=q->link;
                q->link=p;
                if(p!=start)
                r->link=q;
                else
                start=q;
                temp=p;
                p=q;
                q=temp;

            }
        }
    }
    return start;
}