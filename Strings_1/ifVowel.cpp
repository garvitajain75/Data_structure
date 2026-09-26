#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Garvita";
    int count = 0;
    int i = 0;
    while(i<=6){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
}