#include<iostream>
using namespace std;
int product(int x){
    for(int i=1;i<=x;i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    product(n);
}