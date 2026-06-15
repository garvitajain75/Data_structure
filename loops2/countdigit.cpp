#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i=0;
    int a=n;
    while(n>0){
        n=n/10;
        i++;
    }
    if(a==0) cout<<1;
    else cout<<"Digit in the given number is : "<<i;
}