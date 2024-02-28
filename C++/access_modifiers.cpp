// //access modifiers
// #include<iostream>
// using namespace std;
// class parent
// {
// 	public:
// 	int x;
		
// 	protected:
// 	int y;
// 	private:
// 		int z;
// };

// class child1:public parent
// {
//     child1(){
// cout<<"x will be remain public";
// cout<<"y will be remain public";
// cout<<"z will be in acccessible";
//     }
// };
// class child2:private parent{
//     child2()
//     {
// cout<<"x can be private";
// cout<<"y will be private";
// cout<<"z can be inaccesssible";
//     }
// };
// class child3:protected parent{
//     child3()
//     {

    
// cout<<"	x will be procted" ;
// cout<<"y will be procted";
// cout<<"z will be inaccessible";
//     }
	
// };

// int main()
// {
// 		parent p;
// 		p.x;
// 		return 0;
// }



#include<iostream>
using namespace std;
int passing(int x);

int main()
{
int a;
cin>>a;
int r=passing(a);
cout<<passing(a);
}

int passing(int x)
{
    if(x>0)
    {
        return (-x);

    }
    else{
        return(x);
    }
}
















