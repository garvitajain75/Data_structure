#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int z=i+n;z<=2*n-1;z++){
            cout<<z;
        }
        cout<<endl;
    }
}