// constructor :1.default constructor 2.parameterarised constructor 3.copy constructor
/*
#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
 rectangle( )
    {
        l=7;
        b=8;

    }
};
int main()
{
    rectangle r;
    r.l;
    r.b;
    cout<<r.l<<" "<<r.b<<endl;
    return 0;
}*/
// /2.parameterarised constructor   


/*#include<iostream>
using namespace std;
class rectangle
{
public:
int l;
 int b;

 rectangle (int x,int y)
  {
   l=x; 
  b=y;
  }
 };
 int main()
 {
    rectangle r(9,6);
    r.l;
    r.b;
    cout<<r.l<<" "<<r.b<<endl;
return 0;
 }*/


//  copy constructor

/*#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;

  rectangle(int x,int y)
{
l=x;
b=y;
}
 rectangle( rectangle &r1)
 {

   int  l=r1.l;
   int  b=r1.b; 
 }
};
int main()
{
  rectangle r2(9,6);
  r2.l;
  r2.b;  
 cout<<r2.l<<" "<<r2.b<<endl;
 
 rectangle r3=r2;
  
 cout<<r3.l<<" "<<r3.b<<endl;

  return 0;
}*/

// polymorphism:i.compile time polymorphism,ii.run time polymorphism
// compile time polymorphism achievd through operator overloading
/*
#include<iostream>
using namespace std;
class sum
{
  public:

  void add(int x,int y)
  {
    int sum=x+y;
    cout<<"sum of two parameters:"<<sum<<endl;
  }
   void add(int x,int y,int z)
  {
    int sum=x+y+z;
    cout<<"sum of three parameters:"<<sum<<endl;
  }
  void add(float x,float y)
  {
    float sum=x+y;
    cout<<"sum of three parameters:"<<sum<<endl;
  }
};
int main()
{
  sum s;
  s.add(9,6);
  s.add(9,6,1);
  s.add(float(2.5),float(5.2));
}*/
// compile time polymorphism achievd through operator overloading
// opertor oveloading 
/* 
#include<iostream>
using namespace std;

class complex{
  public:
  int real;
  int img;

complex(int x,int y)
{
  real=x;
  img=y;

}
complex operator +(complex&c)
{
complex ans(0,0);
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
}
};
int main()
{
  complex c1(9,6);
    complex c2(1,2);
    complex c3=c1+c2;
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
return 0;

}*/
/*
#include<iostream>
using namespace std;

class complex{
  
  public:
  int real;
  int img;
complex(int x,int y){
  real=x;
  img=y;

}
complex operator +(complex &c)
{
  complex ans(0,0);
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
}
};
int main()
  {
complex c1(1,2);
complex c2(1,3);
complex c3=c1+c2;
cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
return 0;
  }

*/
// destructor
/*
#include<iostream>
using namespace std;
 class rectangle
 {
  public:
  int l;
  int b;
rectangle(int x ,int y)
{
  l=x;
  b=y;
}

rectangle(rectangle &r1)
{
  l=r1.l;
  b=r1.b;

}
~rectangle(){
  cout<<"destructor is called"<<endl;

}

 };


int main()
{
  rectangle r2(9,6);
  r2.l;
  r2.b;
  cout<<r2.l<<" "<<r2.b<<endl;
  rectangle r3=r2;

 cout<<r3.l<<" "<<r3.b<<endl;
}

// run time polymorphism :overriding
*/
#include<iostream>
using namespace std;

class parent{
  public:
  virtual void print()
  {
    cout<<"this is parent class "<<endl;
  }
  void show()
  {
        cout<<"this is parent class "<<endl;
  }
};

class child:public parent 
{
  public:
   void print()
  {
    cout<<"this is child class "<<endl;
  }
  void show()
  {
        cout<<"this is child class "<<endl;
  }
};
int main()
{ 
  parent *p;
  child c;
  p=&c;
  p->print();
  p->show();
  return 0;
}












