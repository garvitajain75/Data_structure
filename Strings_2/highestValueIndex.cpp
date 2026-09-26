#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main(){
    string arr[] = {"234" , "7673" , "0098" , "563" , "0006735"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=0;i<5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxS = arr[i];
        }
    }
    cout<<maxS;
}