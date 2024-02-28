/*............INSERTION...................
1.INSERT AT BEGNNING
2.INSERT AT END
3.INSERT AT GIVEN POSITION
   3.i.INSERT AT AFTER
   3.ii.INSERT AT BRFORE
   3.iii.INSERT AT POSITION  
*/
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node *InsertAtBeg(struct node *satrt,int data);
struct node *InsertAtEnd(struct node *start,int data);
struct node *InsertAtAfter(struct node *start,int data,int item);
struct node *InsertAtBefore(struct node *start,int data,int item);
struct node *InsertAtPositions(struct node *start,int data,int pos);
void display();
int main()
{
    int data,choice,item,pos;
    printf("1.INSERT AT BEGNNING\n");
    printf("2.INSERT AT END\n");
    printf("3.INSERT AT AFTER NODE\n");
    printf("4.INSERT AT BEFORE NODE\n");
    printf("5.INSERT AT POSITION\n");
    printf("6.exit\n");
    printf("\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=InsertAtBeg(start,data);
        break;
        case 2:
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=InsertAtEnd(start,data);
        break;
    case 3:
        printf("enter the element which is add After node\n");
        scanf("%d",&item);
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=InsertAtAfter(start,data,item);
        break;
        case 4:
        printf("enter the element which is add BEFORE node\n");
        scanf("%d",&item);
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=InsertAtBefore(start,data,item);
        break;
        case 5:
        printf("enter the element which is add the position\n");
        scanf("%d",&pos);
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        start=InsertAtBefore(start,data,item);
        break;
        case 6:
        exit(1);
        break;
    default:
    printf("wrong choice\n");
        break;
    }

}

struct node *InsertAtBeg(struct node *satrt,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    temp=start;
    return start;
}
struct node *InsertAtEnd(struct node *start,int data)
{
     struct node *p,*temp;
     temp=(struct node *)malloc(sizeof(struct node ));
    temp->info=data;
    p=start;
    while(p!=NULL)
    p=p->link;
    p->link=temp;
    return start;
}

struct node *InsertAtAfter(struct node *start,int data,int item)
{
struct node *p,*temp;
p=start;
while(p!=NULL)
{
    if(p->info==item)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=data;
        temp->link=p->link;
        p->link=temp;
        return temp;

    }
    p=p->link;
}
printf("%d is not found in the list\n");
 return start;
}