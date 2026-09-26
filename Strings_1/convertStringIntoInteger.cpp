#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10+(str[i]-'0');
    }
    cout<<num;
}