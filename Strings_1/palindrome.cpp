#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="abcdcba";
    string s = str;
    reverse(str.begin(),str.end());
    if(s==str) cout<<"String is palindrome ";
    else cout<<"Not palindrome";
}
