
// 1-D array
// Q1. program to input vlaues into an array and displays them
/*#include<stdio.h>
int main()
{
    // int size=10;
    int array[5];
    // printf("enter the array elemrnt\n");
    for(int i=0;i<=5;i++)
    {
        printf("you are enter this arr[%d]\n",i);
        scanf("%d",&array[i]);

    }
     printf("you are enter this\n");
    for(int i=0;i<=5;i++)
    {
       
        printf("%d",array[i]);
        printf("\n");
        
    }
}*/

// Q2. program to add array element
/*#include<stdio.h>
int main()
{
     int size;
    printf("enter the size:");
    scanf("%d",&size);
    int  array[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the array element of arr[%d] ",i);
        scanf("%d",&array[i]);
    }
    int sum=0;
    printf("sum of array element\n");
    for(int i=0;i<size;i++)
    {
        sum+=array[i];
    }
    printf("%d",sum);
}*/
// Q3. program to count the even and odd
/*#include<stdio.h>
int main()
{
    int size;
    
    printf("enter the size:");
    scanf("%d",&size);
    int array[size];
    printf("enter the array element \n");
    int even=0;
    int odd=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]); 
        if(array[i]%2==0)
       {
        even++;
       }
       else{
        odd++;
       }
    }
    printf("even=%d\t odd=%d\n",even,odd);
}*/

// Q4. program to find the minimum and maximum
/*#include<stdio.h>
int main()
{
    int array[]={50,6,90,8,2,1};
    int min,max;
    min=max=array[0];
    for(int i=0;i<6;i++){
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("max=%d\t min=%d",max,min);
}*/

// Q4. program to the reverse elemnet of array

/*#include<stdio.h>
int main()
{
    int array[]={50,6,90,8,2,1};
int temp,i,j;
// for(int i=6;i>0;i--)
// {

//     temp=array[i];
//     array[i]=array[j];
//     array[j]=temp;
// }

printf("the reversing the array element\n");
for(int i=6;i>=0;i--)
{
    printf("%d",array[i]);
    printf("\t");
}
}*/

// Q4. program to search the elemnet of array
/*#include<stdio.h>
#define size 10
int main()
{  
int array[size]={1,2,6,5,4,7,8,9,90,100};

printf("enter the element of array to be search\n");
int item;
scanf("%d",&item);
for(int i=0;i<size;i++)
{
    // scanf("%d",&array[i]);
    if(item==array[i])
    {
        printf("%d found at position %d\n",item,i+1);
        break;
    }
}
 if(item==size)
    {
           printf("Record was not found....");
    }

return 0;
}*/
/****************1-D array AND FUNCTION*************/
// Q5. program topass array element to a function
/*#include<stdio.h>
void check(int n);
int main()
{
    int array[10];
    printf("enter the array element\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    check(array[i]);
    }
}
    void check(int n)
    {
        if(n%2==0)
        {
            printf("%d is even\n",n);
        }
        else {
            printf("%d is odd\n",n);
        }
    }*/
// Q6. program to understand the effect of passing an array to a function

/*#include<stdio.h>
void func(int val[]);
int main()
{
    int array[6]={9,8,7,4,5,6} ;
    func(array);
    for(int i=0;i<6;i++)
    {
        printf("%d\t",array[i]);
    }
}
void func(int val[])
{
  int sum=0;
  
  for(int i=0;i<6;i++)
  {
    val[i]=val[i]*val[i];
    sum+=val[i];
  }
  printf("the sum of square=%d\n",sum);  

}*/
// Q7. program that use ageneral function that works on array of different size 
/*#include<stdio.h>
int add(int arr[],int n);
int main()
{
    int A[5]={1,2,3,4,5};
    int B[7]={1,2,3,4,5,6,7};
    int C[10]={1,2,3,4,5,6,7,8,9,10};
// int p=add(A,5);
// int q=add(B,7);
// int r=add(C,10);
    printf("sum of element of array A:%d\n",add(A,5));
    printf("sum of element of array B:%d\n",add(B,7));
    printf("sum of element of array C:%d\n",add(C,10));
}
int add(int arr[],int n)
{
    int i,sum=0;
    for( i=0;i<n;i++)

    {
       sum=sum+arr[i]; 
       return sum;
    }
}*/
/*.............2-D array ...................*/
//Q.8. program to input and displays a matrix..
/*#include<stdio.h>
#define row 3
#define col 4
int main()
{
    int array[row][col];
    printf("enter a matrix[mxn]\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("you are entered a matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
















// Q.9 program to addition of two matrix..
/*#include<stdio.h>
#define row 3
#define col 4
int main()
{
    int array1[row][col];
    int array2[row][col];
    printf("enter 1st matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("enter 2nd matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("you are entered 1st matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
     printf("you are entered 2nd matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array2[i][j]);
        }
         printf("\n");
    }
    int array3[row][col];
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            array3[i][j]=array1[i][j]+array2[i][j];
        }
    }
printf("sum of matrix\n");
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array3[i][j]);
        }
        printf("\n");
    }

}*/
// Q.10 program to multiplication  of two matrix..
/*#include<stdio.h>
#define row 4
#define col 4
int main()
{
    int array1[row][col];
    int array2[row][col];
    printf("enter 1st matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("enter 2nd matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("you are entered 1st matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
     printf("you are entered 2nd matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array2[i][j]);
        }
         printf("\n");
    }
    int array3[row][col];


           
        
        // multiplication
        printf("resultant mulplication of two matrix...\n");
         for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
             array3[i][j]=0;
           for(int k=0;k<row;k++)
           {
            array3[i][j]+=array1[i][k]*array2[k][j];
           }
        }
        }
             for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array3[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

// // Q.11 program to transpose  of  matrix..
/*#include<stdio.h>
#define row 2
#define col 2
int main()
{
    int array1[row][col];
   
    printf("enter 1st matrix..\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    
    printf("you are entered 1st matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            array1[i][j]=array1[j][i];
        }
    }
    printf("transpose of matrix...\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array1[j][i]);
        }
        printf("\n");
    }

}*/
/*.........some dditional problembs.............*/
// problem 1. program to search an element through binary search
/*#include<stdio.h>
#define  size 10
int main()
{
    // int low,up,mid,
    int array[size];
    printf("enter the element of array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("enter the item to be search\n");
    int item;
    scanf("%d",&item);
    int low=0;
    int up=size-1;
    int mid;
    while (low<=up&&item!=array[mid])
    {
  mid=(low+up)/2;
  if(item>array[mid])
  
    low=mid+1; //search in right portion 
  
  if(item<array[mid])

    up=mid-1; //search in left portion 
  
    if(item==array[mid])
 
    printf("%d  found  a t postion %d\n",item,mid+1);
  
   if(low>up)
  
      printf("%d  not found  in array\n",item);
  
    }
    
}*/
// program to sorting using selection sort
/*#include<stdio.h>
#define size 10
int main()
{
    int array[size];
    printf("enter the array element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array);

    }
    int temp;

    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        if(array[i]>array[j])
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }   
        }
    }
    printf("sorted array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
    
}*/

/*#include<stdio.h>
#define size 10
int main()
{
    int array[size];
    printf("enter the array element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array);

    }
    int temp;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }   
        }
    }
    printf("sorted array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
    
}*/

#include<stdio.h>
#define size 10
int main()
{
    int item,i;
    int array[size];
    printf("enter the array element\n");
    for( i=0;i<size-1;i++)
    {
        scanf("%d",&array);

    }
    printf("enter the item to be insert \n");
    scanf("%d",&item);
    for( i=size-2;item<array[i]&&i>=0;i--)
    {
    array[i+1]=array[i];
    array[i+1]=item;
    }
    for( i=0;i<size;i++){
        printf("%d",array[i]);
        printf("\n");
    }


}