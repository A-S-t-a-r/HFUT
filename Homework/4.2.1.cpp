#include<iostream>
#include<iomanip>

using namespace std;
class A {
   private:
    static int a;
    int b;
    public:
    A(int x){b=x;}
    void print()
    {
        cout <<"b=" << b <<" ";
        cout <<"a=" << a << " ";
    }
    void setab(int x,int y)
    {
        a=x;
        b=y;
    }   
};

int A::a=100;

int main() {
    A obj1(10);
    obj1.print();//行2
    A obj2(15);
    obj1.setab(20, 3);
    obj1.print();//行5
    obj2.print();//行6
    return 0;
}