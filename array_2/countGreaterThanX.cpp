#include<iostream>
using namespace std;
int main(){
    int arr[]={45,12,46,78,95,6,34,23,76};
    int x;
    cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}