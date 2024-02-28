/*Q.1: Write a function to count the number of occurence of an element in a single linked list*/
/*  #include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insert_At_Beg(struct node *start,int data);
struct node *insert_At_End(struct node *start,int data);
void occurence(struct node *start,int item);
void display(struct node *start);
int main()
{
    struct node *start=NULL;
    int n;
    int choice,data,item;
    while(1)
    {
        printf("1.create a list\n");
        printf("2.insert at begnnig\n");
        printf("3.insert at end\n");
        printf("4.occurence\n");
        printf("5.display\n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                start=create(start);
                break;
            
        case 2:
        printf("enter  the element to be insert\n");
        scanf("%d",&data);
        start=insert_At_Beg(start, data);
            break;
            case  3:
            printf("enter the element to be insert:");
            scanf("%d",&data);
            start=insert_At_End(start,data);
            break;
            case 4:
            printf("enetr a number\n");
            scanf("%d",&item);
            occurence(start,item);
            break;
            case 5:
            display(start);
            break;
            case 6:
            exit(1);
        
        default:
        printf("wrong choice\n");
            break;
        }

    }
}
struct node *create(struct node *start)
{
    int i,n,data;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
    return start;
    printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_Beg(start,data);
    for(i=2;i<=n;i++)
    {
       printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_End(start,data); 
    }
    return start;
}
struct node *insert_At_Beg(struct node *start,int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
struct node *insert_At_End(struct node *start,int data){
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->link!=NULL)
     p=p->link;
    p->link=temp;
    temp->link=NULL;
    return start;
}
void occurence(struct node *start,int item){
    struct node *p;
    int count=0;
    p=start;
    while (p!=NULL)
    {
        if(p->info==item)
        {
        count++;
        }
       p=p->link;
      
    }
    printf("the total element in list:%d\n ",count);
    
}
void display(struct node *start){
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty.. \n");
        return ;
    }
    p=start;
    printf("list is:\n");
    while (p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->link;
    }
  printf("\n\n");
}*/

/*Q.2: Write a program to find Smallest and Greatest element in a single linked list  */
/*
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insert_At_Beg(struct node *start,int data);
struct node *insert_At_End(struct node *start,int data);
void display(struct node *start);
void greatest(struct node *start);
void smallest(struct node *start);
int main()
{
    struct node *start=NULL;
    int n;
    int choice,data,item;
    while(1)
    {
        printf("1.create a list\n");
        printf("2.insert at begnnig\n");
        printf("3.insert at end\n");
        printf("4.display\n");
        printf("5.greatest\n");
        printf("6.smallest\n");
        printf("7.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                start=create(start);
                break;
            
        case 2:
        printf("enter  the element to be insert\n");
        scanf("%d",&data);
        start=insert_At_Beg(start, data);
            break;
            case  3:
            printf("enter the element to be insert:");
            scanf("%d",&data);
            start=insert_At_End(start,data);
            break;
            case 4:
            display(start);
            break;
            case 5:
            greatest(start);
            break;
              case 6:
            smallest(start);
            break;
            case 7:
            exit(1);
        
        default:
        printf("wrong choice\n");
            break;
        }

    }
}
struct node *create(struct node *start)
{
    int i,n,data;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
    return start;
    printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_Beg(start,data);
    for(i=2;i<=n;i++)
    {
       printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_End(start,data); 
    }
    return start;
}
struct node *insert_At_Beg(struct node *start,int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
struct node *insert_At_End(struct node *start,int data){
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->link!=NULL)
     p=p->link;
    p->link=temp;
    temp->link=NULL;
    return start;
}
void display(struct node *start){
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty.. \n");
        return ;
    }
    p=start;
    printf("list is:\n");
    while (p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->link;
    }
  printf("\n\n");
}

void greatest(struct node *start)
{

    struct node *p,*q;
    int max;
    p=start;
    for(p=start;p->link!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->info>q->info)
            {
                max=p->info;
                
            }
            else
            {
            max=q->info;
            
            }
        }
        
    }

    printf("THE GREATEST NUMBER IS:%d\n",max);
    
}
void smallest(struct node *start)
{
    struct node *p,*q;
    int min;
    p=start;
    
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->info<q->info)
            {
                min=p->info;
            }
            else
            {
                min=q->info;
            }
        }
    
    printf("smallest element is:%d\n",min);
}
*/

/*Q.3: write a function to check if two linked lists are identical .two list are identical if they hava same number of elements and corresponding element in both list are same*/
/*#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insert_1st(struct node *start,int data);
struct node *insert_2nd( struct node *start,int data);
void checkidentical(struct node *p1,struct node *p2);
void display(struct node *start);
int main()
{
    struct node *start1=NULL,*start2=NULL;
    start1=create(start1);
    start2=create(start2);
    printf("list 1 is\t:");display(start1);
    
    printf("list2 is \t:");  display(start2);
  
    checkidentical(start1,start2);

}

void checkidentical(struct node *p1,struct node *p2)
{
    struct node *start3;
    start3=NULL;
    while(p1!=NULL&&p2!=NULL)
    {
       if(p1->info==p2->info)
        { 
             printf("list is identical:\n");
          
        }
        else
        {
            printf("list is no identical\n");

        }
           p1=p1->link;
          p2=p2->link;
         
    }
    
  
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

    
        temp->link=start;
        start=temp;
         return start;
    
    
   
}

struct node *insert_2nd( struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node ));
    temp->info=data;
        p=start;
        while (p->link!=NULL)
        p=p->link;
            p->link=temp;
            temp->link=NULL;
            return start;
    
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
}*/
/*Q.5:Given  a linked list is a 1->2->3->4->5, then the new list should be 5->4->3->2->1 . the list should be remains unchanged*/
/*
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insert_At_Beg(struct node *start,int data);
struct node *insert_At_End(struct node *start,int data);
struct node *reverse(struct node *start);
void display(struct node *start);

int main()
{
   
    struct node *start=NULL;
    int n;
    int choice,data,item;
    while(1)
    {
        printf("1.create a list\n");
        printf("2.insert at begnnig\n");
        printf("3.insert at end\n");
        printf("4.display\n");
         printf("5.reverse\n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                start=create(start);
                break;
            
        case 2:
        printf("enter  the element to be insert\n");
        scanf("%d",&data);
        start=insert_At_Beg(start, data);
            break;
            case  3:
            printf("enter the element to be insert:");
            scanf("%d",&data);
            start=insert_At_End(start,data);
            break;
            case 4:
            display(start);
            break;
            case 5:
            start=reverse(start);
            case 6:
            exit(1);
        default:
        printf("wrong choice\n");
            break;
        }

    }
}

struct node *create(struct node *start)
{
    int i,n,data;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
    return start;
    printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_Beg(start,data);
    for(i=2;i<=n;i++)
    {
       printf("enter the element to be insert\n");
    scanf("%d",&data);
    start=insert_At_End(start,data); 
    }
    return start;
}

struct node *insert_At_Beg(struct node *start,int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
struct node *insert_At_End(struct node *start,int data){
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->link!=NULL)
     p=p->link;
    p->link=temp;
    temp->link=NULL;
    return start;
}
struct node *reverse(struct node *start)
{
    struct node *prev,*ptr,*next;
    prev=NULL;
    ptr=start;
    while (ptr!=NULL)
    {
      next=ptr->link;
      ptr->link=prev;
      prev=ptr;
      ptr=next;
   
    
    }
    start=prev;
    return start;
}
void display(struct node *start)
{
    struct node *p;
    p=start;
    while (p!=NULL)
    {
    printf("%d\t",p->info);
    p=p->link;
    }
    printf("\n");
}*/

/*
Q.6:write a program to swap adjacent element of a singl linked list 
i.BY exchanging info part;
ii.by rearranging links
For example if an linked list is 1->2->3->4->5->6->7->8 than after swapping  adjacent element it sould be become 2->1->4->3->6->5->8->7
*/