#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    //METHOD 1
    //1 3 5 7....upto nth term 
    //An=a+(n-1)d ....a=1,d=2  An=2n-1
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<" ";
    // }

    //METHOD 2
    //Separate variable(not using the formula)
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+2;
    }

    //4 7 10 13 17
    int b=4;
    for(int i=1;i<=n;i++){
        cout<<b<<" ";
        b+=3; 
    }

}