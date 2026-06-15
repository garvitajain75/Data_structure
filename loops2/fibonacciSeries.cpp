#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int previous=0;
    int current=1;
    int sum;
    for(int i=0;i<n;i++){
       cout<<current<<" ";
        sum=previous+current;
        //cout<<sum<<" ";
        previous=current;
        current=sum;
    }
}