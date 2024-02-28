#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *createList(struct node *start);
struct node *insertAtBeg(struct node *start,int data);
struct node *inserAtEnd(struct node *start,int data);
struct node *AddAfter(struct node *start,int data,int item);
struct node *AddBefore(struct node *start,int data,int item);
struct node *insertAtpos(struct node *start,int data,int pos);
struct node *delete(struct node *start,int data);
struct node *Reverse(struct node *start);
void Display(struct node *start);
void count(struct node *start);
int main()
{
    struct node *start=NULL;
    int choice,data,item,pos;
    while (1)
    {
        printf("1.create a list\n");
        printf("2.Insert at begnning\n");
        printf("3.Insert at End\n");
        printf("4.Add After\n");
        printf("5.Add Before\n");
        printf("6.Insert at position\n");
        printf("7.Delete\n");
        printf("8.Reverse\n");
        printf("9.count element\n");
        printf("10.Display\n");
        printf("11.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            start=createList(start);
            break;
            case 2:
            printf("enter the element to be insert At Beginning\n");
            scanf("%d",&data);
            start=insertAtBeg(start,data);
            break;
            case 3:
            printf("enter the element to be insert At End\n");
            scanf("%d",&data);
            start=inserAtEnd(start,data);
            break;
            case 4:
            printf("enter the element to be insert\n");
            scanf("%d",&data);
            printf("enter the element after which to insert\n");
            scanf("%d",&item);
            start=AddAfter(start,data,item);
            break;
            case 5:
            printf("enter the element to be insert\n");
            scanf("%d",&data);
            printf("enter the element Before which to insert\n");
            scanf("%d",&item);
            start=AddBefore(start,data,item);
            break;
            case 6:
            printf("enter the element to be insert\n");
            scanf("%d",&data);
            printf("enter the element position which to insert\n");
            scanf("%d",&pos);
            start=AddBefore(start,data,pos);
            break;
            case 7:
            printf("enter the element to be deleted\n");
            scanf("%d",&data);
            start=delete(start,data);
            break;
            case 8:
            start=Reverse(start);
            break;
            case 9:
            count(start);
            break;
             case 10:
            Display(start);
            break;
            case 11:
            exit(1);
            break;
            default:
            printf("wrong choice\n");
            break;
        }//switch()

    }//while()
    
}//main()

struct node *insertAtBeg(struct node *start,int data)
{
    struct node *p;
    
}