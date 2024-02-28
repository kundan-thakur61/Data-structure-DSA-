#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>v;
    cout<<"size:"<<v.size()<<endl;
      cout<<"capacity:"<<v.capacity()<<endl;
      for(int i=1;i<5;i++)
{
      v.push_back(i);
      cout<<"\t"<<i<<endl;
}
      
    cout<<"size:"<<v.size()<<endl;
      cout<<"capacity:"<<v.capacity()<<endl;
      v.insert(v.begin()+2,9);
        for(int i=1;i<5;i++)
{
      cout<<i;
}


    //   cout
    //   v.push_back(2);
      
    // cout<<"size:"<<v.size()<<endl;
    //   cout<<"capacity:"<<v.capacity()<<endl;
    //   v.push_back(3);
      
    // cout<<"size:"<<v.size()<<endl;
    //   cout<<"capacity:"<<v.capacity()<<endl;
    //   v.push_back(4);
      
    // cout<<"size:"<<v.size()<<endl;
    //   cout<<"capacity:"<<v.capacity()<<endl;
//     //   return 0;

// v.resize(10);
// cout<<"size:"<<v.size()<<endl;
//       cout<<"capacity:"<<v.capacity()<<endl;
//       v.pop_back();
//       v.pop_back();
//         v.pop_back();
//       v.pop_back();
//         v.pop_back();
//       v.pop_back();
//         v.pop_back();
//       v.pop_back();
// cout<<"size:"<<v.size()<<endl;
//       cout<<"capacity:"<<v.capacity()<<endl;
}
