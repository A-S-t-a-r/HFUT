#include<iostream>
using namespace std;

class point
{
    int x,y;
public:point(int _x=4,int _y=3):x(_x),y(_y){cout<<"point-ctor"<<" ";}
    point(point &p){x=p.x;y=p.y;cout<<"copypoint-ctor"<<" ";}
    void printXY()const{cout<<"x="<<x<<" "<<"y="<<y<<" ";}
};
class circle
{
    point center;
    int r;
    public:circle(point p,int _r):center(p),r(_r){cout<<"circle-ctor"<<" ";}
};
void fun1(point &p){p.printXY();}

int main()
{
    point p(1,2);//行1
    circle c(p,1);//行2
    fun1(p);//行3

    return 0;
}