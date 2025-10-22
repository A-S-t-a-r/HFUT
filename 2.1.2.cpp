#include<iostream>
using namespace std;
int main()
{
    int m,n,k=0;

    m=1000;
    n=45;
    while(m>=n)
    {
        m=m-n;
        k=k+1;
    }

    cout<<k<<" "<<m<<endl;
    
    return 0;
}