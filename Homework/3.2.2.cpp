#include<iostream>
using namespace std;

int z=3;

void f(int &x,int y,int &z)
{
    x=x+y;
    y=x*z;
    z++;
    cout<<x<<" "<<y<<" "<<z<<" ";
}

int main()
{
    int x,y,z;
    x=1;y=3;z=2;
    f(x,y,z);
    cout<<x<<" "<<y<<" "<<z<<" "<<::z<<" ";
    f(y,z,x);
    cout<<x<<" "<<y<<" "<<z<<" "<<::z<<" ";
    f(z,x,y);
    cout<<x<<" "<<y<<" "<<z<<" "<<::z<<" ";
    return 0;
}