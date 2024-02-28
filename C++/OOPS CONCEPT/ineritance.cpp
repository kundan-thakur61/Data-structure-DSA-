#include<iostream>
using namespace std;
class kundan1
{
    public:
    kundan1()
    {

    cout<<"kundan thakur"<<endl;
    }
    };

    class kaushal1
{
    public:
    kaushal1()
    {

    cout<<"kaushal babu"<<endl;
    }
    };
     
    class aisect:public kundan1,public kaushal1
{
    public:
aisect()
{
    cout<<"both are study in aisect lol university"<<endl;
    }
    };
    int main()
    {
        aisect a;
        return 0;

    }