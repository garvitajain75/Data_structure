#include<iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    int x=(int)a;
    if (x<0) x=x-1;
    float y=(float)x;
    a=a-x;
    cout<<a;
}
