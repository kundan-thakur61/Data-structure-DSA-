// Q1.to search the element from given array element and also find the position of array element
// traversing array element
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    cout<<"enter the array element"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
cout<<"enter x:";
int x;
cin>>x;
int occurence=-1;
 for(int i=0;i<v.size();i++){
        if(v[i]==x)
        {
            occurence=i;

        }
    }
cout<<"position of array element:"<<occurence;
for(int i=v.size();i>=0;i--){
    cout<< "\t"<<v[i];

}
    return 0;

}*/

// count the no. for particular element 
// e.g:1,2,5,4,5,6,5,9,5
// enter x:5
// count:4
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
    {
vector<int>v(10);
cout<<"enter the array element:"<<endl;
for(int i=0;i<v.size();i++){
    cin>>v[i];

}
cout<<"enter  x:";
int x;
cin>>x;
int counters=0;
for(int i=0;i<v.size();i++){
   if(v[i]==x)
   {
counters++;
   }
}
cout<<counters;

return 0;
    }
*/
#include<vector>
using namespace std;
int main()
    {
        int arr[]={1,2,3,4,5};
        