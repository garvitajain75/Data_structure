#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle: ";
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b)){
        cout<<"Given sides are of triangle.";
    }
    else{
        cout<<"Given sides are not of triangle.";
    }
}