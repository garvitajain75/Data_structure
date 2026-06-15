#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Seller has made profit. ";
        cout<<"Profit = "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Seller has made loss. ";
        cout<<"Loss = "<<cp-sp;
    }
    else {
        cout<<"Neither profit nor loss";
    }

}