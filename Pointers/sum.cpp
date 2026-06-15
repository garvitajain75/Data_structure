#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    int* ptr1=&a;
    int* ptr2=&b;
    cout<<*ptr1+*ptr2;
}