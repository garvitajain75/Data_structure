#include<iostream>
using namespace std;
int main(){
    int a,b,c,rem;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    c=a/b;
    rem= a-b*c;
    cout<<"Remainder is: "<<rem;
    return 0;
    
}
