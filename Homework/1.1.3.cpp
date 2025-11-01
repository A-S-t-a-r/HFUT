#include<iostream>
#include<iomanip>
using namespace std;
int func(int x)
{
    switch(x)
    {   
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;    
        default:
            cout<<"x="<<x<<endl;
            return(func(x-1)+func(x-2));
    }
    // All code paths are handled above; no need for an extra return here.
    return 0; // Added to avoid control reaching end of non-void function
}

int main()
{
    int y;
    y=func(5);
    cout<<"y="<<y<<"";
}