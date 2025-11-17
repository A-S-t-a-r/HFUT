#include<iostream>
#include<cmath>

using namespace std;

class  Point
{
    public:Point(int xx=0,int yy=0);
            Point(Point &p);
            void setXY(int xx,int yy){x=xx;y=yy;};
            int getX(){return x;};
            int getY(){return y;};
    private:int x,y;        
};

Point::Point(int xx,int yy)
{
    x=xx;
    y=yy;
    cout<<"Point-con ";
}
Point::Point(Point &p)
{
    x=p.x;
    y=p.y;
    cout<<"Point-copy-con ";
}
class Line
{
    public:Line(Point xp1,Point xp2);
           Line(Line &lin);
           double getLen();
    private:Point p1,p2;       
};

Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2)
{
    cout<<"Line-con ";
}
Line::Line(Line &lin):p1(lin.p1),p2(lin.p2)
{
    cout<<"Line-copy-con ";
}

double Line::getLen()
{
    double x=p1.getX()-p2.getX();
    double y=p1.getY()-p2.getY();
    double len=sqrt(x*x+y*y);
    return len;
}

int main()
{
    Point myp1(1,1),myp2(4,5);//行1
    Line line(myp1,myp2);//行2
    Line line2=line;//行3
    return 0;
}