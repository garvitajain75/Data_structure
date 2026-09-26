#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    if(n%2!=0) cout<<"Invalid Input"<<endl;
    else{
        reverse(str.begin()+n/2,str.end());
        cout<<str;
    }
}