#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
}*top=NULL;
void push(int item);
int pop();
int peek();
int isEmpty();
void  display();
int main()
{
    int choice, item;
    while (1)
    {
       printf("1.push\n");
       printf("2.pop\n");
       printf("3.display the element at the top\n");
       printf("4.display all element in the stack\n");
       printf("5.quit\n");
       printf("enter your choice\n");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1:
        printf("insert the element to be pushed\n");
        scanf("%d",&item);
        push(item);
        break;
        case 2:
        pop();
        break;
        case 3:
       printf("item at he top =%d\n",peek());
        break;
        case 4:
        display();
        break;
        case 5:
        exit(1);
        default:
        printf("wronf choice\n");
       }

    }
    
}
void push(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=item;
    if(temp==NULL)
    {
        printf("stack is underflow\n");
        return;
    }
  temp->link=top;
  top=temp;
}


int pop()
{
    struct node *temp;
    int item;
    if(isEmpty())
    {
        printf("stack is underflow\n");
        exit(1);
    } 
    temp=top;
    item=temp->info;
    top=top->link;
    free(temp);
    return item;
}

 int peek()
{
  if(isEmpty())
    {
        printf("stack is underflow\n");
        exit(1);
    }
    return top->info;   
}
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    struct node *p;
    p=top;
    if(isEmpty())
    {
        printf("stack is underflow\n");
        return;
    }
    // p=top;
    printf("stack elements:\n");
    while (p!=NULL)
    {
       printf("%d\t",p->info);
    p=p->link;
    }
    printf("\n");
}