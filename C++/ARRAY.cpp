// find the sum of array element
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    cout<<"enter the array element";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        // int sum=0;
        sum=sum+arr[i];
    }
cout<<"sum="<<sum<<endl;
    return 0;
}*/

// 2. find the maximum  in the array element
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5],max=0,min=0;

    cout<<"enter the array element";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
for(int i=0;i<5;i++){
if(arr[i]>max)
max=arr[i];


}
cout<<"max="<<max<<" "<<"min="<<min<<endl;
    return 0;
} */

// 3. find the reverse order of array elemrnt
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array element "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];

    }
    for(int i=0;i<5;i++){
    cout<<"\t"<<arr[i];
    cout<<endl;
    }
    cout<<"the reverse order of array";
    for(int i=5;i>=0;i--){
        cout<<"\t"<<arr[i];
    }

}*/ 

// to use a sequential search in a program
#include<iostream>
using namespace std;
 

 int SQ_searches( int numbers);
 

int main(){
    int arr_size=10;
    int arr[arr_size];

cout<<"Enter the array element";
for(int i=0;i<arr_size;i++)
{
    cin>>arr[i];
    
}
int num;
cout<<"Enter the element to be searrch"<<endl;
cin>>num;
int d=  SQ_searches(num);
cout<<d;
// if(d!=-1)
// {
//     cout<<num<<d;

// }
// else{
// cout<<num<<endl;
// }
return 0;

}
 int SQ_searches( int numbers){
    if(numbers!=-1)
{
    cout<<numbers;

}
else{
cout<<numbers<<endl;
}

 }
