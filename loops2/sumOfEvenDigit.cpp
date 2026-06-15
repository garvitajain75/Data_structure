#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int digit,sum=0;
    while(n>0){
        digit=n%10;
        if(digit%2==0) sum+=digit;
        n=n/10;
    }
    cout<<"Sum of even digits is : "<<sum;
}