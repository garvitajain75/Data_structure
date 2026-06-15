//100 97 94 ...upto terms which are positive
#include<iostream>
using namespace std;
int main(){

    //METHOD 1
    //find n then find An by applying the formula
    // for(int i=100;i>=1;i-=3){
    //     cout<<i<<" ";
    // }


    //METHOD 2
    // int a=100;
    // for(int i=1;i<=34;i++){
    //     cout<<a<<" ";
    //     a=a-3;
    //}

    //METHOD 3
    for(int i=100;i>0;i-=3){
        cout<<i<<" ";
    }
}