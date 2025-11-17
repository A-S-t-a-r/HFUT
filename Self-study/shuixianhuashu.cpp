#include<iostream>

using namespace std;

class shuixianhuashu{
public:
    void iswater(int n);
};

void shuixianhuashu::iswater(int n){
    int a=n%10;
    int b=n/10%10;
    int c=n/100;
    if(a*a*a+b*b*b+c*c*c){
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    shuixianhuashu s;
    s.iswater(n);

    return 0;
}