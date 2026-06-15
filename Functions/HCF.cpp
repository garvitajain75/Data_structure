#include<iostream>
using namespace std;
int hcf(int a,int b){
    int h=1;
    for(int i=min(a,b);i>=1;i++){
        if(a%i==0 && b%i==0){
            h=i;
            break;
        }
       
    }
     return h;
    
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<hcf(a,b);
}