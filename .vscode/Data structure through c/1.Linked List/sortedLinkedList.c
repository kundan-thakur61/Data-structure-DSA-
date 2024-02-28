#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *insert(struct node *start,int data);
void  search(struct node *start,int data);
void display(struct node *start);
void selectionSortByExchanging(struct node *start);

int main()
{
    int choice ,data;
    struct node *start=NULL;
    while (1)
    {
       printf("1.insert\n");
        printf("2.display\n");
       printf("3.search\n");
       printf("5.selectioon sort by exchanging\n");
      
       printf("4.exit\n");
       printf("enter your choice\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1:
      printf("enter the element to be insert:\n");
      scanf("%d",&data);
      start=insert(start,data);
        break;
        case 2:
       display(start);
       break;
       case 3:
       printf("enter the element to be search:\n");
       scanf("%d",&data);
       search(start,data);
       break;
       case 4:
       exit(1);
       case 5:
       selectionSortByExchanging(start);
       break;
       default:
       printf("wrong choice\n");
        break;
       }
    }
    
}

struct node *insert(struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;

    if(start==NULL||data<start->info)
    {
        temp->link=start;
        start=temp;
        return start;
    }
    else
    {
        p=start;
        while (p->link!=NULL&&p->link->info<data)
            p=p->link;
            temp->link=p->link;
            p->link=temp;    
    }
    return start;
}
void search(struct node *start,int data){
    struct node *p;
    int pos;
    if(start==NULL||data<start->info)
    {
        printf("%d not found in the list\n");
        return;
    }
    p=start;
    pos=1;
    while (p!=NULL&&p->info<=data)
    {
        if(p->info==data)
        {
            printf("%d is found in the position of %d\n",data,pos);
            return;
        }
        p=p->link;
        pos++;
    }
    printf("%d is not found in the list\n",data);
}
void display(struct node *start)
{
    struct node *q;
    if(start==NULL)
    {
        printf("list is empty\n");
        return;
    }
    q=start;
    printf("list is.....\n");
    while (q!=NULL)
    {
        printf("%d\t",q->info);
        q=q->link;
    }
    printf("\n");
}
void selectionSortByExchanging(struct node *start)
{
    struct node *p,*q;
    int temp;
    p=start;
    for(p=start;p!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->info>q->info)
            {
                temp=p->info;
                p->info=q->info;
                q->info=temp;
            }
        }
    }

}