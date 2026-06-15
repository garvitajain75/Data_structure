#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a chracter: ";
    cin>>ch;
    int x;
    x=(int)ch;
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<"Given character is an alphabet";
    }
        else{
            cout<<"Charater is not an alphabet";
        }
    }

