//nth fibonacci number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int previous=1;
    int current=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=previous+current;
        previous=current;
        current=sum;
    }
    cout<<current;
}