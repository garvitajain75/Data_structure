#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string temp = str;
    reverse(temp.begin(),temp.end());
    cout<<str+temp;
}