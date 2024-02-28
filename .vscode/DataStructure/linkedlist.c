#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int info;
    struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start );
void count (struct node *start);
void search(struct node *start,int item);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatafternode(struct node *start,int data,int item);
struct node *addatbeforenode(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);
int main()
{
    struct node *start=NULL;
    // start=NULL;
    int choice,data,item,pos;
    while(1)
    {
        printf("1.create list\n ");
        printf("2.display\n");
        printf("3.count\n");
        printf("4.search\n");
        printf("5.add to empty/add at beginning\n ");
        printf("6.add at end\n");
        printf("7.add after node\n");
        printf("8.add before node\n");
        printf("9.add at position\n");
        printf(" 10. deletion\n ");
        printf("11.reverse\n");
        printf("12. quit\n\n ");
        printf("   enter your choice\n  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        start=create_list(start);
            break;
        case 2:
        display(start);
        break;
        case 3:
        count(start);
        break;
        case 4:
        printf("enter the element to be search\n");
        scanf("%d",&item);
        search(start,item);
        break;
        case 5:
        printf("enter the element to be insert in at the begnning\n");
        scanf("%d",&data);
        start=addatbeg(start,data);
        break;
        case 6:
      printf("enter the element to be insert in at the end\n");
      scanf("%d",&data);
      start=addatend(start,data);
      break;
      case 7:
      printf("enter the element to be inserted\n");
      scanf("%d",&data);
      printf("enter the element after which to insert\n");
      scanf("%d",&item);
      start=addatafternode(start,data,item);
      break;
      case 8:
      printf("enter the element to be inserted\n");
      scanf("%d",&data);
      printf("enter the element after which to insert\n");
      scanf("%d",&item);
      start=addatbeforenode(start,data,item);
      break;
      case 9:
      printf("enter the element to be inserted\n");
      scanf("%d",&data);
      printf("enter the element after which to insert\n");
      scanf("%d",&pos);
      start=addatpos(start,data,pos);
      break;
      case 10:
      printf("enter the element to be delete\n");
      scanf("%d",&data);
      start=del(start,data);
      break;
      case 11:
      start=reverse(start);
      break;
      case 12:
      exit(1);
      default:
      printf("wrong choice\n");

        } //end of switch
    }//end of while
}//end of main()
void display(struct node *start ){
    struct node  *p;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;

    }
    p=start;
    printf("list is :\n");
    while (p->link!=NULL)
    {
        printf("%d",p->info);
        p=p->link;
    }
    printf("\n\n");
    
}
void count (struct node *start){
    struct node *p;
    int count=0;
    p=start;
    while (p!=NULL)
    {
        p=p->link;
        count++;
    }
    printf("total element is:%d",count);
}
void search(struct node *start,int item)
{
    struct node *p;
    p=start;
    int pos=1;
    while (p!=NULL)
    {
        if(p->info==item)
        {
            printf("item %d found at the position%d\n",item,pos);
            return;

        }
        p=p->link;
        pos++;
    }//end of while loop
         printf("item %d not found in the list....\n",item);
}//end of search

struct node *addatbeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info;
    temp->link=start;
    start=temp;
    return start;
}//end of addatbeg

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
    struct node *addatafternode(struct node *start,int data,int item)
    {
        struct node *temp,*p;
        p=start;
        while (p!=NULL)
        {
           if(p->info==item)
           {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info=data;
            temp->link=p->link;
            p->link=temp;
            return start;

           }
           p->link;
        }
        printf("%d not present in the list\n",item);
        return start;
     
    }
    struct node *addatbeforenode(struct node *start,int data,int item)
    {
        struct node *temp,*p;
        if(start==NULL)
        {
            printf("list is empty\n");
            return start;
        }
        // if data to be inserted before first node
        if(item==start->info)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info=data;
            temp->link=start;
            // temp=start;
            start=temp;
            return start;

        }
        p=start;
        while(p!=NULL)
        {
            if(p->link->info==item)
            {
               temp=(struct node *)malloc(sizeof(struct node));
                temp->info=data;  
                temp->link=p->link;
                p->link=temp;
                return start;
            }
            p=p->link;
        }
         printf("%d not present in the list\n",item);
        return start;
     
    }

    struct node *addatpos(struct node *start,int data,int pos)
    {
        struct node *temp,*p;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=data;
        if(pos==1)
        {
            temp->link=start;
            start=temp;
            return start;

        }
        p=start;
        for(int i=1;i<pos-1&&p!=NULL;i++)
        p=p->link;
        if(p==NULL)
        printf("there are less than %d element\n",pos);
        else
        {
        temp->link=p->link;
        p->link=temp;
        }
        return start;
    }
    struct node *create_list(struct node *start){
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
    struct node *del(struct node *start,int data)
    {
        struct node *temp,*p;
        if(start==NULL){
            printf("List is empty\n");
            return start;
        }
        if(start->info==data) /*delete of first node*/
        {
            temp=start;
            start=start->link;
            free(temp);
            return start;
        }
        p=start;    /*delete in betweeen or ata the end*/
        while(p->link!=NULL)
        {
            if(p->link->info==data)
        {
            temp=p->link;
            p->link=temp->link;
            free(temp);
            return start;
        }
        p=p->link;
        }
printf("element %d not found \n",data);
return start;

    }
    struct node *reverse(struct node *start)
    {
        struct node *prev,*next,*ptr;
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