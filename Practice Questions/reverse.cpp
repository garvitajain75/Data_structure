#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int n = 0;
    while(x>0){
        n = 10 * (n + x%10);
        x = x/10;
    }
    cout<<n/10;
}