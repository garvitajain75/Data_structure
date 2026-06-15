#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int rev=0;
    int x;
    // while(n>0){
    //     x=n%10;
    //     rev=(x+rev)*10;
    //     n=n/10;
    // }
    // cout<<rev/10;

    while(n>0){
        rev=rev*10;
        x=n%10;
        rev=x+rev;
        n=n/10;
    }
    cout<<rev;
}