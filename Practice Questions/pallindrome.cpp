#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int n = 0;
    int m = x;
    while(x>0){
        n = (n+(x%10)) * 10;
        x=x/10;
    }
    if(m==(n/10)) cout<<"Number is pallindrome";
    else cout<<"Number is not pallindrome";
}