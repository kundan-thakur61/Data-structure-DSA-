/*program to circular linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};

struct node *create_list( struct node *last);
void display(struct node *last);
struct node *addtoempty(struct node *last,int data );
struct node *addatbeg(struct node *last,int data );
struct node *addatend(struct node *last,int data );
struct node *addatafter(struct node *last,int data,int item );
struct node *del(struct node *last,int data );
int main()
{
    int choice,data,item;
    struct node *last=NULL;
    while (1)
    {
        printf("1.create list........\n");
        printf("2.display...\n");
        printf("3.add at empty\n");
        printf("4.add at begnning\n");
        printf("5.add at end\n");
        printf("6.add at after\n");
        printf("7.delete\n");
        printf("8.Quit\n");

        printf("enter your choice..........\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
         last=create_list(last);
            break;
        case 2:
        display(last);
        break;
        case 3:
        printf("enter  the element to be insert:");
        scanf("%d",&data);
        last=addtoempty(last,data);
        break;
        case 4:
        printf("enter the element to be insert:");
        scanf("%d",&data);
        last=addatbeg(last,data);
        break;
        case 5:
        printf("enter the element to be insert:");
        scanf("%d",&data);
       last=addatend(last,data);
        break;
        case 6:
        printf("enter the element to be insert :");
        scanf("%d",&data);
        printf("enter the element after which to insert :");
        scanf("%d",&item);
        last=addatafter(last,data,item);
        break;

        case 7:
        printf("enter the element to be deleted:");
        scanf("%d",&data);
        last=del(last,data);
        break;
    case 8:
    exit(1);

        default:
        printf("wrong choice\n");
            break;
        }
    }  
}

void display(struct node *last){
    struct node *p;
    if(last==NULL)
    {
        printf("list is empty..\n");
        return;
    }
    p=last->link;
    // we use do-while loop because if we take while loop then the terminating condition will be
        //    satified in the first time only and loop will no executed at all.
    
    do
    {
         
        printf("%d\t",p->info);
        p=p->link;
     
    }while (p!=last->link);
       printf("\n");
    }
    
//  struct node *addtoempty(struct node *last,int data ){
//     struct node *temp;
//     temp=(struct node *)malloc(sizeof(struct node));
//     temp->info=data;
//     temp->link=last->link;
//     last->link=temp;
//     return last;

// }
struct node *addtoempty(struct node *last,int data ){
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node ));
     
     temp->info=data;
     last=temp;
     last->link=last;
    return last;
}
struct node *addatbeg(struct node *last,int data )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=last->link;
    last->link=temp;
    return last;
}
struct node *addatend(struct node *last,int data )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=last->link;
    last->link=temp;
    last=temp;
    return last;
}
struct node *addatafter(struct node *last,int data,int item )
{
    struct node *p,*temp;
   p=last->link;
   do
   {
    if(p->info==item)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=data;
        temp->link=p->link;
        p->link=temp;
        if(p==last)
            last=temp;
            return last;
    }
    p=p->link;
   } while (p!=last->link);
   printf("%d is no preent in list\n",item);
   return last;

}
struct node *create_list( struct node *last)
{
    int i,n,data;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    last=NULL;
    if(n==0)
    printf("list is empty\n");
    return last;
     printf("enter the element to insert:\n");
        scanf("%d",&data);
        last=addtoempty(last,data);
    for(i=2;i<=n;i++)
    {
        printf("enter the element to be insert:\n");
        scanf("%d",&data);
        last=addatend(last,data);
    }
    return last;
}
struct node *del(struct node *last,int data ){
    struct node *p,*temp;
    if(last==NULL)
    {
        printf("list is empty\n");
        return last;
    }
    if(last->link==last && last->info==data)  //deletion of only node
    {
        temp=last;
        last=NULL;
        free(temp);
        return last;
    }
    if(last->link->info==data) //deletion of first node
    {
        temp=last->link;
        last->link=temp->link;
        free(temp);
        return last;
    }
    p=last->link; //deletion in between
    while (p->link!=last)
    {
        if(p->link->info==data)
        {
            temp=p->link;
            p->link=temp->link;
            free(temp);
            return last;

        }
        p=p->link;
    }
    if(last->info==data) //deletion of last node
    {
    temp=last;
    p->link=last->link;
    last=p;
    free(temp);
    return last;
    }
    printf("element %d not found \n",data);
    return last;
}