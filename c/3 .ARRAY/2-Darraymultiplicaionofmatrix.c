#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,k;
	int m,n;
    printf("enter the square matrix\n");
	
	scanf("%d%d", &m ,&n );
	if(m==n)
	{
	printf("this is a square matrix");
    printf("\n");

	printf("this is 1st array element\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("this is 2nd array element\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=0;
			
			for(k=0;k<m;k++)
			{
				
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",arr3[i][j]);
	    }
	printf("\n");
     }
		
	}
	else{

        printf("this is no square matrix");
    }
	return 0;
}