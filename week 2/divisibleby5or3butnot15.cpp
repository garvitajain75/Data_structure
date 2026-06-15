#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if((x%5==0)||(x%3==0)){
        if(x%15!=0){
            cout<<"Number is divisible by 5 or 3 but not to 15";
        }
        else{
            cout<<"not matching condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}
