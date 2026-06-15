#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int count(int n){
    int i=0;
    while(n>0){
        n=n/10;
        i++;
    }
    return i;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int numberofdigit=count(n);
    cout<<"Square : "<<square(numberofdigit);
}