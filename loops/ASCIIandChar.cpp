#include<iostream>
using namespace std;
int main(){
    char ch;
    int i=0;
    while(i<26){
        cout<<int(i+'A')<<" "<<(char)(i+'A')<<endl; 
        i++;
    }
}