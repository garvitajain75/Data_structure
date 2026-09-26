#include<iostream>
using namespace std;
int main(){
     char str[6] = {'a','b','c','d','e'};
     for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
     }

    // char str[5]="abcd";
    // cout<<str;

    cout<<(int)(str[5]);
}