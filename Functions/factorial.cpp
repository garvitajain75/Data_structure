#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int j=2;j<=x;j++){
        f*=j;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i);
        cout<<endl;
    }
}