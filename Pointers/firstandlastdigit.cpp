#include<iostream>
using namespace std;
int find(int x,int *ptr1,int *ptr2){
    *ptr2=x%10;
    while(x>9){
        x/=10;
    }
    *ptr1=x;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastdigit,firstdigit;
    int *ptr1=&firstdigit;
    int *ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<endl<<lastdigit;
}