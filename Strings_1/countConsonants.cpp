#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="garvita";
    int i=0,count=0;
    while(i<7){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
        }
        i++;
    }
    cout<<count;
}