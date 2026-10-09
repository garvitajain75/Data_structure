#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int sum = 0;
    for(int i=1;i<=x/2;i++){
        if(x%i==0){
            sum+=i;
        }
    }
    cout<<"Sum of all the factors of "<<x<<" is "<<sum;
}