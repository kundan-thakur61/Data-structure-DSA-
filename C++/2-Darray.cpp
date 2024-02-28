#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the row and column mxn"<<endl ;
    cin>>m>>n;

    int M[m][n];
    cout<<"enter the array element"<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
cin>>M[i][j];
        }
    }
    cout<<"resultant matrix are:"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
       cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

    }