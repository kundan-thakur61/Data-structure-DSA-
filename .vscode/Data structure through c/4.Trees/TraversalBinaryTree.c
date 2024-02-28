#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *Lchild;
    int info;
    struct node *Rchild;
};
struct node *insert(struct node *ptr,int data);
void preorder(struct node *ptr);
void inorder(struct node *ptr);
void postorder(struct node *ptr);
int Hight(struct node *ptr);
struct node *searchByNonRecursive(struct node *ptr,int skey);
struct node *searchByRecursive(struct node *ptr,int skey);
struct node *MinimumByNonRecursive(struct node *ptr);
struct node *MinimumByRecursive(struct node *ptr);
struct node *MaximumByNonRecursive(struct node *ptr);
struct node *MaximumByRecursive(struct node *ptr);
struct node *del(struct node *root,int dkey);
int main()
{
    struct node *root=NULL,*ptr;
    int choice ,data;
    while(1)
    {
        printf("\n");
        printf("1:insert the element to be Tree\n");
        printf("2:preorder traversal\n");
        printf("3:inorder Traversal\n");
        printf("4:postorder Traversal\n");
        printf("5:hight of tree\n");
        printf("6:Binary search by Non-Recursive \n");
        printf("7:Binary search by Recursive \n");
        printf("8:Minimum keys By Non Recursive\n");
        printf("9:Minimum keys By  Recursive\n");
        printf("10:Maximum keys By Non Recursive\n");
        printf("11:Maximum keys By  Recursive\n");
        printf("12:Quit\n\n");
        printf("13:delete the elemenent\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the element to be insert in tree\n");
            scanf("%d",&data);
            root=insert(root,data);
            break;
        case 2:
            preorder(root);
            break;
        case 3:
             inorder(root);
             break;
        case 4:
             postorder(root);
             break;
        case 5:
            printf("Height of Tree is :%d\n",Hight(root));
            break;
        case 6:
            printf("enter the key to be searched\n");
            scanf("%d",&data);
            ptr=searchByNonRecursive(root,data);
            if(ptr==NULL)
            printf("data is not present in the tree\n");
            else
            printf("data is present \n");
            break;

             case 7:
            printf("enter the key to be searched\n");
            scanf("%d",&data);
            ptr=searchByRecursive(root,data);
            if(ptr==NULL)
            printf("data is not present in the tree\n");
            else
            printf("data is present \n");
            break;

            case 8:
            ptr=MinimumByNonRecursive(root);
            if(ptr!=NULL)
            printf("minimum key is %d\n",ptr->info);
            break;
            case 9:
            ptr=MinimumByRecursive(root);
            if(ptr!=NULL)
            printf("minimum key is %d\n",ptr->info);
            break;
            case 10:
            ptr=MaximumByNonRecursive(root);
            if(ptr!=NULL)
            printf("maximum key is %d\n",ptr->info);
            break;
            case 11:
            ptr=MaximumByRecursive(root);
            if(ptr!=NULL)
            printf("miaximum key is %d\n",ptr->info);
            break;
            case 12:
            exit(1);
            break;
            case 13:
            printf("enter the key to br deleted from tree\n");
            scanf("%d",&data);
            ptr=del(root,data);
            break;
             default:
             printf("wrong choice\n");
        }    
    } 
}
struct node *insert(struct node *ptr,int data)
{
    if(ptr==NULL)
    {
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->info=data;
    ptr->Lchild=NULL;
    ptr->Rchild=NULL;
    }
    else if(data<ptr->info)
    ptr->Lchild=insert(ptr->Lchild,data);
    else if(data>ptr->info)
    ptr->Rchild=insert(ptr->Rchild,data);
    else 
    printf("duplicate data\n");
    return;
}
void preorder(struct node *ptr)
{
    if(ptr==NULL)
    return;
    printf("%d\t",ptr->info);
    preorder(ptr->Lchild);
       preorder(ptr->Rchild);
}
void inorder(struct node *ptr)
{
    if(ptr==NULL)
    return;
    inorder(ptr->Lchild);
    printf("%d\t",ptr->info);
    inorder(ptr->Rchild);
}
void postorder(struct node *ptr)
{
    if(ptr==NULL)
    return;
    postorder(ptr->Lchild);
    postorder(ptr->Rchild);
    printf("%d\t",ptr->info);
}
int Hight(struct node *ptr)
{
    int H_left,H_right;
    if(ptr==NULL)
    return 0;
    H_left=Hight(ptr->Lchild);
    H_right=Hight(ptr->Rchild);
    if(H_left>H_right)
    return 1+H_left;
    else
    return 1+H_right;

}
struct node *searchByNonRecursive(struct node *ptr,int skey)
{
    while (ptr!=NULL)
    {
    if(skey<ptr->info)
    ptr=ptr->Lchild;
    else if(skey>ptr->info)
    ptr=ptr->Rchild;
    else
    return ptr;
    }
   return NULL;
}
struct node *searchByRecursive(struct node *ptr,int skey)
{
    while (ptr!=NULL)
    {
        if(skey<ptr->info)
        return searchByRecursive(ptr->Lchild,skey);
        else if(skey>ptr->info)
        return searchByRecursive(ptr->Rchild,skey);
        else
        return ptr;
    }
    
}

struct node *MinimumByNonRecursive(struct node *ptr)
{
    if(ptr!=NULL)
    while (ptr->Lchild!=NULL)
    
        ptr=ptr->Lchild;
        return ptr;
    
    
}
struct node *MinimumByRecursive(struct node *ptr)
{
    if(ptr==NULL)
    return NULL;
    else if(ptr->Lchild==NULL)
    return ptr;
    else 
    return  MinimumByRecursive(ptr->Lchild);
}

struct node *MaximumByNonRecursive(struct node *ptr)
{
    if(ptr!=NULL)
    while (ptr!=NULL)
    
        ptr=ptr->Rchild;
        return ptr;
    
    
}

struct node *MaximumByRecursive(struct node *ptr)
{
    if(ptr==NULL)
    return NULL;
    else if(ptr->Rchild==NULL)
    return ptr;
    else 
    return MaximumByRecursive(ptr->Rchild);
}

struct node *del(struct node *root,int dkey)
{
    struct node *par,*ptr,*child,*succ,*parsucc;
    ptr=root;
    par=NULL;
    while(ptr!=NULL)
    {
        if(dkey==ptr->info)
        break;
        else if(dkey<ptr->info)
        ptr=ptr->Lchild;
        else
        ptr=ptr->Rchild;
    }
    if(ptr==NULL)
    {
        printf("dkey is not present in tree\n");
        return root;
    }
    if(ptr->Lchild==NULL&&ptr->Rchild==NULL)
    {
        parsucc=ptr;
        succ=ptr->Rchild;
        while (succ->Lchild!=NULL)
        {
            parsucc=succ;
            succ=succ->Lchild;
        }
        ptr->info=succ->info;
        ptr=succ;
        par=parsucc;

    }
    if(ptr->Lchild!=NULL)
    child=ptr->Lchild;
    else
    child=ptr->Rchild;
    if(par==NULL)
    root=child;
    else if(ptr==par->Lchild)
    par->Lchild=child;
    else
    ptr->Rchild=child;
    free(ptr);
    return root;
}