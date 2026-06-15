#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Divisible by 5 and 3";
        }
        else{
            cout<<"Not divisile by 5 and 3";
        }
    }
    else{
        cout<<"Not divisible";
    }
}