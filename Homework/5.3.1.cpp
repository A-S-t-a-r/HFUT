#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;

int yanghui[100][100]={0};

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if(j==0||j==i){
            yanghui[i][j]=1;
        }
        else{
            yanghui[i][j]=yanghui[i-1][j]+yanghui[i-1][j-1];
        }
    }
}

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<yanghui[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}