// 1.find factorial number

/*#include<iostream>

using namespace std;
int fact(int n);
int main(){
	int n1;
	cin>>n1;
	int num=fact(n1);
	cout<<num;
}
int fact(int n)
{
	if(n==1)
	return 1;
int ans= n*fact(n-1);
	return ans;
}*/
// 2.find fibonacci number
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1)
    return n;
    
        return fib(n-1)+fib(n-2);

    }

int main()
{
    int num;
    cin>>num;
    int result=fib(num);
    cout<<result;
    return 0;

}