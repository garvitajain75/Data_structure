#include<iostream>
using namespace std;
int main(){
    int i;
    // for(int i=19;i<=190;i++){
    //     if(i%19==0) cout<<i<<endl;
    // }  --> wrong method loop bhot jaida baar chalega 

    for(int i=19;i<=190;i=i+19){
        cout<<i<<endl;
    }
}