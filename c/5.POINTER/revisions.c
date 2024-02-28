/*.............ADDRESS OPERATOR.............*/
// program to print address of variables using address operator
/*#include<stdio.h>
int main()
{
    int age=30;
    float sal=1500.00;
    printf("value of age=%d\t and address of age=%u\n",age,&age);
    printf("value of sal=%2.f\t and address of age=%u\n",sal,&sal);
    age++;
    sal++;
    printf("\n\n");
    printf("value of age=%d\t and address of age=%u\n",age,&age);
    printf("value of sal=%2.f\t and address of age=%u\n",sal,&sal);
    return 0;

}*/
/*.............DECLARATION OF POINTER VARIABLES.............*/
// data_type *p_name;

// Q.2:program to dereference pointer varables
/*#include<stdio.h>
int main()
{
    int a=5;
    float b=10.5;
    int *p1=&a;
    float *p2=&b;
    printf("value of p1=address of a=%u\n",p1);
     printf("value of p2=address of b=%u\n",p2);
      printf("address of a=%u\n",p1);
       printf("address of b=%u\n",p2);
        printf("value of a=%d%d%d\n",*p1,a,*(&a));
        printf("value of a=%f%f%f\n",*p2,b,*(&b));
}*/
// Q.2:program to print the size pointer variable and print the dereferencing by that pointer
/*#include<stdio.h>
int main()
{
    int a=5,*p1=&a;
    float b=10.5,*p2=&b;
    double c=12.24,*p3=&c;
    char d='x',*p4=&d;
    printf("size of p1=%d\tsize of *p1=%d\n",sizeof(p1),sizeof(*p1));
     printf("size of p2=%d\tsize of *p2=%d\n",sizeof(p2),sizeof(*p2));
      printf("size of p3=%d\tsize of *p3=%d\n",sizeof(p3),sizeof(*p3));
       printf("size of p4=%d\tsize of *p4=%d\n",sizeof(p4),sizeof(*p4));
}*/
// Q.3:program to print the pointer arithmatic
/*#include<stdio.h>
int main()
{
    int a=5,*p1=&a;
    float b=10.5,*p2=&b;
    double c=12.24,*p3=&c;
    char d='x',*p4=&d;
    printf("value of p1=address of a=%u\n",p1);
      printf("value of p1=address of a=%u\n",p2);
        printf("value of p1=address of a=%u\n",p3);
          printf("value of p1=address of a=%u\n",p4);
          p1++;
          p2++;
          p3++;
          p4++;
          printf("\n\n");
          printf("value of p1=address of a=%u\n",p1);
      printf("value of p1=address of a=%u\n",p2);
        printf("value of p1=address of a=%u\n",p3);
          printf("value of p1=address of a=%u\n",p4);

}*/
// Q.3:program tounderstand the postfix/ increament/decreament in a pointer variable of base type int
/*#include<stdio.h>
int main()
{
    int a=5;
    int *p1=&a;
    printf("value of p1 and adress of p1=%u\n",p1);
     printf("value of p1 =%u\n",++p1);
      printf("value of p1 =%u\n",p1++);
       printf("value of p1 =%u\n",--p1);
        printf("value of p1 =%u\n",p1--);

}*/

/*.............pointer to pointer.............*/
// program to understand pointer to pointer
/*#include<stdio.h>
int main()
{
  int a=5;
  int *p1=&a;
  int **p2=&p1;
  // printf("value of a p1 and address of a=%d\n",p1);
  printf("value of a=%d\t%d\t%d\n",a,*p1,*(&a),**p2);
   printf("address of a=%u\t%u\t%u\n",&a,p1,*p2);
    printf("value of p1=%d\t%d\t%d\n",&a,p1,*p2);
     printf("addresssb of p1=%u\t%u\n",&p1,*p2);
      printf("value of p2=%u\t%u\n",&p1,p2);
      printf("addresssb of p2=%u\n",&p2);
}
*/
/*.............pointer and !-D array.............*/ 
/*program to print the value and address of the element of the element of an array*/
/*#include<stdio.h>
int main()
{
  int i;
  int arr[]={9,5,8,7,4,1};
  for(int i=0;i<6;i++)
  {
    printf("the value of arr[%d]=%d\t",i,arr[i]);
    
    printf("the value of arr[%d]=%d\n",i,&arr[i]);
  }
  
}
#include<stdio.h>
int main()
{
  int i;
  int arr[]={9,5,8,7,4,1};
  int *p=arr;
  for(int i=0;i<6;i++)
  {
    printf("the value of arr[%d]=%d %d %d\n",i,arr[i],*(arr+i),*(p+i));
    
    printf("the value of arr[%d]=%d %d %d\n",i,&arr[i],arr+i,p+i);
  }
  
}*/
/*.............pointerto an array.............*/ 
// declare:(*ptr)[5];
/*program to understand difference between pointer to an interger and poiner to an array of integers*/
/*#include<stdio.h>
int main(){
  int *p; //can point to an integer
  int (*ptr)[5]; // can point to an array of 5 integer
  int arr[5];
  p=arr;
  ptr=arr;
  printf("p=%d,ptr=%d\n",p,ptr);
  p=p+2;
  ptr+=2;
    printf("p=%d,ptr=%d\n",p,ptr);

}
#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5};
  int *p=arr;
  int (*ptr)[5]=arr;
  printf("p=%d,ptr=%d\n",p,ptr);
   printf("*p=%d,*ptr=%d\n",*p,*(ptr));
    printf("sizeof(p)=%d,sizeof(*p)=%d\n,",sizeof(p),sizeof(*p));
      printf("sizeof(ptr)=%d,sizeof(*ptr)=%d\n,",sizeof(ptr),sizeof(*ptr));
}*/
/*....................DYNAMIC MEMORY ALLOCATION.........................*/
/*program to understand dynamic allocation to be entered*/
// use:malloc
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n;
  printf("enter the valve of n:\n");
  scanf("%d",&n);
  p=(int*)malloc(10*sizeof(int));
  if(p==NULL)
  {
    printf("memory not availabe\n");
   exit(1);;
  }
  for(int i=0;i<n;i++)
  {
    printf("enter an intergers\n");
    scanf("%d",p+i);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }

}*/
/*program to understand dynamic allocation to be entered*/
// use:malloc
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n;
  printf("enter the valve of n:\n");
  scanf("%d",&n);
  p=(int*)calloc(10 ,sizeof(int));
  if(p==NULL)
  {
    printf("memory not availabe\n");
   exit(1);;
  }
  for(int i=0;i<n;i++)
  {
    printf("enter an intergers\n");
    scanf("%d",p+i);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }

}*/



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n;
printf("malloc\n");
  printf("enter the valve of n:\n");
  scanf("%d",&n);
  p=(int*)malloc(10*sizeof(int));
  if(p==NULL)
  {
    printf("memory not availabe\n");
   exit(1);;
  }
  for(int i=0;i<n;i++)
  {
    printf("enter an intergers\n");
    scanf("%d",p+i);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }
  printf("\n");
 printf("calloc\n");
printf("enter the valve of n:\n");
  scanf("%d",&n);
  p=(int*)calloc(10 ,sizeof(int));
  if(p==NULL)
  {
    printf("memory not availabe\n");
   exit(1);;
  }
  for(int i=0;i<n;i++)
  {
    printf("enter an intergers\n");
    scanf("%d",p+i);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }
  printf("\n");
  printf("realloc\n");
  printf("enter the valve of n:\n");
  scanf("%d",&n);
  p=(int*)realloc(p,5);
  if(p==NULL)
  {
    printf("memory not availabe\n");
   exit(1);;
  }
  for(int i=0;i<n;i++)
  {
    printf("enter an intergers\n");
    scanf("%d",p+i);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }

}*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n,i;
  printf("enter number of integers to be enter:\n");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  if(p==NULL)
  {
    printf("memoryis not sufficent \n");
    exit(1);
  }
  for(int i=0;i<n;i++)
  {
  printf("enter an integer:");
  scanf("%d",&p[i]);
  }
  for(int i=0;i<n;i++)
  {
  printf("%d\t",p[i]);
  }
  printf("\n");
}*/



/*..............................pointers to functions..............................*/
/*program to illustrate that every functin has an address and how to aceess that address */
/*#include<stdio.h>
// void func();
int main()
{
  int func();
  printf("address of function main() is :%u\n",main);
    printf("address of function main() is :%u\n",func);
func();
}
func()
{
    printf("india is great\n");

}*/

/*....................... declaring a pointer to a function.............................*/
// return_type (*ptr_name)(typr1,type2........);
// e.g:  float (*p)(int ,float,char)
 // or
  // float *p(int ,float);

/*ptogram to invoke a function using pointer */
#include<stdio.h>
float add(int,float);
int main()
{
  float (*func)(int ,float);
  float add(int,float),result;
  func=add;
  result=add(5,5.6);

  printf("%f\n",result);
    result=(*func)(5,5.6);
  printf("%f",result);
}
float add(int a,float b){
  return(a+b);

}