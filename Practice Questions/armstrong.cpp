#include<iostream>
using namespace std;
int fact(int x){
    int n=1;
    for(int i=2;i<=x;i++){
        n*=i;
    }
    return n;
}
int main(){
    int n;
    cout <<"Enter a number : ";
    cin>>n;
    int m = n;
    int x;
    int sum=0;
    
    while(n>0){
        x = n%10;
        sum += fact(x);
        n=n/10;
    }
    if(m == sum) cout<<"Number is strong";
    else cout<<"Number is not strong";
}