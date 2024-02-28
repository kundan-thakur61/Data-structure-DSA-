#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"enter the Row and Coloumn"<<" of the First Matrix"<<endl;
    cin>>r1>>c1;

    int r2,c2;
    cout<<"enter the Row and Coloumn"<<" of the Second Matrix"<<endl;
    cin>>r2>>c2;
    if(c1==r1)
    {

         int M1[r1][c1],M2[r2][c2],M3[r1][c2];
cout<<"enter the First matrix element"<<endl;
       
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
        cin>>M1[i][j]; 
            }
        }
    cout<<"enter the Second matrix element"<<endl;
       
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
        cin>>M2[i][j]; 
            }
        }
        cout<<"you entered first Matrix are..."<<endl;
     for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
        cout<<M1[i][j]<<" "; 
            }
            cout<<endl;
        }
        cout<<"you entered Second Matrix are..."<<endl;
     for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
        cout<<M2[i][j]<<" "; 
            }
            cout<<endl;
        }

for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                M3[i][j]=0;
                for(int k=0;k<r1;k++)
                {
                     M3[i][j]+=M1[i][k]*M2[k][j];
                }
            }
            }
cout<<"THE MULTIPLICATION OF TWO MATRIX ARE....."<<endl;
for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
cout<<M3[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else
    {
cout<<"this is not possible to multiplication of two matrix";

    }

return 0;

}