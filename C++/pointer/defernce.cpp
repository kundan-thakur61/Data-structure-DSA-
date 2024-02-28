#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b=20;
    int *ptri=&a;
    float *ptrf=&b;
    cout<<"the value of ptri="<<" " <<ptri<<"and the address of a="<<a<<"\n";
    // printf("the value of ptri =%d and the address of a=%d\n ",ptri,a);
    // printf("the value of ptrf  and the address of f=%d\n ",b);
    // printf("adress of ptri=%d",&ptri);
    //  printf("adress of ptrf=%d",&ptrf);
    //    printf("value of a=%d\t%d\t%d\n",a,*ptri,*(&a));
    //        printf("value of b=%f\t%f\t%f\n",b,*ptrf,*(&b));
     
return 0;

}