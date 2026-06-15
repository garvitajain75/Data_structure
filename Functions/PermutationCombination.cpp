#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutaion(int n,int r){
    int npr=fact(n)/fact(r);
    return npr;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutaion(n,r);
    cout<<ncr<<endl<<npr;
}