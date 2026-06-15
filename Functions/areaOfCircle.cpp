#include<iostream>
using namespace std;
double area(int x){
    return 3.14*x*x;
}
int main(){
    int r;
    cout<<"enter radius : ";
    cin>>r;
    cout << "Area of the circle is: " << area(r) << " units square";
}