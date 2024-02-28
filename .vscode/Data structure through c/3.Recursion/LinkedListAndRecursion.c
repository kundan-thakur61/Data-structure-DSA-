#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int info;
    struct node *link;
};
int lenght(struct node *ptr);
int sum(struct node *ptr);
void display(struct node *ptr);
void Rdisplay(struct node *ptr);
int search(struct node *ptr,int item);
struct node *insertLast(struct node *ptr,int item);
struct node *delLast(struct node *ptr);
struct node *reverse(struct node *ptr);
int main()
{
    struct node *start=NULL;
    int choice,data;
    while (1)
    {
        printf("1.lenght\n");
        printf("1.sum\n");
        printf("3.display\n");
        printf("4.reverse display\n");
        printf("5.search\n");
        printf("6.insert last\n");
        printf("7.delete last\n");
        printf("8.reverse\n");
        printf("9.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
        printf("%d",lenght(start));
        break;
        case 2:
        printf("%d",sum(start));
        break;
        case 3:
        display(start);
        break;
        case 4:
        Rdisplay(start);
        break;
        case 5:
        printf("enter the element to be search\n");
        scanf("%d",&data);
        printf("found element is:%d",search(start,data));
        break;
        case 6:
        printf("enter the element to be insert\n");
        scanf("%d",&data);
        printf("%d",insertLast(start,data));
        break;
        case 7:
        printf("deleted element is:%d",delLast(start));
        break;
        case 8:
        reverse(start);
        break;
        case 9:
        exit(1);
        break;
        default:
        printf("wrong choice\n");
            break;
        }
    }
    
}


int lenght(struct node *ptr)
{
    if(ptr==NULL)
    return 0;
    else
    return(1+lenght(ptr->link)); 
}
int sum(struct node *ptr)
{
    if(ptr==NULL)
    return 0;
    else
    return(ptr->info+sum(ptr->link));
}

void display(struct node *ptr)
{
if(ptr==NULL)
return;
printf("%d",ptr->info);
display(ptr->link);

}
void Rdisplay(struct node *ptr)
{
if(ptr==NULL)
return;
display(ptr->link);
printf("%d",ptr->info);
}
int search(struct node *ptr,int item)
{
    if(ptr==NULL)
    return 0;
    if(ptr->info==item)
    return 1;
    return search(ptr->link,item);
}

struct node *insertLast(struct node *ptr,int item)
{
    struct node *temp;
    if(ptr==NULL)
    {
        temp=malloc(sizeof(struct node));
        temp->info=item;
        temp->link=NULL;
        return temp;
    }
    ptr->link=insertLast(ptr->link,item);
    return ptr;
}
struct node *delLast(struct node *ptr)
{
    if(ptr->link==NULL)
    {
        free(ptr);
        return NULL;
    }
    ptr->link=delLast(ptr->link);
    return ptr;

}

struct node *reverse(struct node *ptr)
{
    struct node *temp;

if (ptr->link==NULL)
return ptr;
temp=reverse(ptr->link);
ptr->link=ptr;
ptr->link=NULL;
return temp;
}