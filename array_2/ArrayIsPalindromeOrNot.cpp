#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1,13};
    bool flag = true;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"Array is palindrome";
    else cout<<"NOT palindrome";
}