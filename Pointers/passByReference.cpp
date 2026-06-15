#include<iostream>
using namespace std;
// void swap(int* x,int* y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a=6,b=8;
//     int* x=&a;
//     int* y=&b;
//     swap(x,y);
//     cout<<a<<" "<<b;
// }

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=6,b=8;
    swap(a,b);
    cout<<a<<" "<<b;
}