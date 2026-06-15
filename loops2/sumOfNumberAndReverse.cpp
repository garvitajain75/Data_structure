#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int digit;
    int rev=0;
    int  a=n;
    while(n>0){
        rev*=10;
        digit=n%10;
        rev+=digit;
        n/=10;
    }
    cout<<"Sum of number and its reverse is : "<< a+rev;
}
