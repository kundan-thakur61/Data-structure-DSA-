#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
void selectionSortByExchanging(struct node *start);
void display(struct node *start);
struct node *insert_addAtBeg(struct node *start,int data);
// struct node addAtBeg(struct node *start,int data);
int main()
{
    struct node *start=NULL;
    int choice,data;
    while (1)
    {
        printf("1.insert_add at beginning\n");
        printf("2.display\n");
        printf("3.selection sort by exchanging \n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

       switch (choice)
       {
       case 1:
        printf("enter the element to insert\n");
        scanf("%d",&data);
        start=insert_addAtBeg(start,data);
        break;
        case 2:
        display(start);
        break;
        case 3:
        selectionSortByExchanging(start);
        break;

        case 4:
        exit(1);
       
       default:
       printf("wrong choice\n");
        break;
       }
    }
    
}
struct node *insert_addAtBeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node) );
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
void display(struct node *start){
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty\n");
        return;
    }
    p=start;
    printf("list is ..........\n");
    while (p!=NULL)
    {
       printf("%d\t",p->info);
       p=p->link;
    }
    printf("\n\n");
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