#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int sumE = 0, sumO = 0;
    while(x>0){
        int n = x%10;
        if(n%2==0) sumE+=n;
        else sumO+=n;
        x=x/10;
    }
    cout<<"Sum of Even Digits : "<<sumE <<endl;
    cout<<"Sum of Odd Digits : "<<sumO;
}