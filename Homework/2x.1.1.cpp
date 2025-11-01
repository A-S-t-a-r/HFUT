#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;

    bool bi,br;

    cin>>a>>b;

    bi =a>1000;
    br =b<=1e3;

    cout<<bi<<" "<<br;
    return 0;
}