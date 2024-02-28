#include<iostream>
using namespace std;
class fruits
{
    public:
    string name;
    string color; 
};
int main()
{
    fruits apple;  //here:apple is an object
    apple.name="apple";
    apple.color="red";
    cout<<apple.name <<" "<<apple.color <<" "<<endl;
    // creating new object

    fruits *mango= new fruits();
    mango->name="mango";
    mango->color="yellow";
    cout<<mango->name<<" "<< mango->color<<endl;

    return 0;
}