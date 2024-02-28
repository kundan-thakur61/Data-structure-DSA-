#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *lchild;
    struct node *rchild;
};
struct node *inserts(struct node *ptr,int data);
void Rpreorder(struct node *ptr);
void RInorder(struct node *ptr);
void Rpostorder(struct node *ptr);

int main()
{
struct node *root=NULL,*ptr;
int choice,data;
while(1)
{
    printf("1:Insert the element in tree\n");
    printf("2:preorder Traversal\n");
    printf("3:Inorder Traversal\n");
    printf("4:postorder Traversal\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         printf("enter the element to insert in tree\n");
        scanf("%d",&data);
        root=inserts(root,data);
        case 2:
        Rpreorder(data);
        break;
        case 3:
        RInorder(data);
        break;
        case 4:
        Rpostorder(data);
        break;
        case 5:
        exit(1);
        default:
        printf("wrong choice\n");
     
    }
}
}


struct node *inserts(struct node *ptr,int data)
{
    if(ptr==NULL)
    {
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->info=data;
        ptr->lchild=NULL;
        ptr->rchild=NULL;
    }
    else if(data<ptr->info)
    ptr=ptr->lchild;
    else if(data>ptr->info)
    ptr=ptr->rchild;
    else 
    printf("duplicates keys\n");
    return ptr;
}
void Rpreorder(struct node *ptr)
{
    if(ptr==NULL)
    return;
    printf("%d",ptr->info);
    Rpreorder(ptr->lchild);
    Rpreorder(ptr->rchild);
}
void RInorder(struct node *ptr)
{
    if(ptr==NULL)
    return;
    
    RInorder(ptr->lchild);
    printf("%d",ptr->info);
    RInorder(ptr->rchild);
}
void Rpostorder(struct node *ptr)
{
     if(ptr==NULL)
    return;
    
    Rpostorder(ptr->lchild);
    
    Rpostorder(ptr->rchild);
    printf("%d",ptr->info);
}