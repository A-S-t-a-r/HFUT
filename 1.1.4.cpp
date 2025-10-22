#include<iostream>
using namespace std;
int main()
{
    int y=19,i=0,j,a[8];
    do
    {
        a[i]=y%2;i++;y=y/2;
    } while (y>=1);
    cout<<i<<endl;
    for(j=i-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
    