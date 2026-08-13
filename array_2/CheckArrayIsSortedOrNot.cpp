#include<iostream>
using namespace std;
int main(){
    bool ascending = true, descending = true;
    int arr[]={56,55,45,12,10,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ascending = false;
        }
        if(arr[i]<arr[i+1]){
            descending = false;
        }
    }
    if(ascending == true) cout<<"Array is sorted in ascending order";
    else if(descending == true) cout<<"Array is sorted in descending order";
    else cout<<"Array is not sorted";
}