#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char choice;
    do{
        cout<<"Enter first number : ";
        cin>>n1;
        cout<<"Enter second number : ";
        cin>>n2;
        cout<<n1+n2<<endl;
        cout<<"Enter your choice(y/n) ";
        cin>>choice;
    }
    while(choice == 'y' || choice =='Y');
}