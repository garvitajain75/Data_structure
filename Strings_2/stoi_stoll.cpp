#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456789";
    int x = stoi(str);
    cout<<x;

    //stoll
    string s = "1236347623898832900";
    long long a = stoll(s);
    cout<<s;
}