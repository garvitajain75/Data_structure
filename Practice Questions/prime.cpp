#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    bool flag = true;
    for(int i=2;i<=x/2;i++){
        if(x%i == 0){
            flag = false;
            break;
        }
    }
    if(x==1) cout<<"Number is neither prime nor Composite";
    else if(flag == true) cout<<"Number is Prime";
    else cout<<"Numer is not prime";
}