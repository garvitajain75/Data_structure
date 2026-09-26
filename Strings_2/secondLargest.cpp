#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int max = 0 , smax = 0;
    for(int i=0;i<str.length();i++){
        int digit = str[i]-'0';
        if(digit>max){
            smax = max;
            max = digit;
        } 
        else if(digit<max && digit>smax){
            smax = digit;
        }
    }
    cout<<smax;
}