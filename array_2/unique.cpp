#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,3,2,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        count(arr,n);
    }
}