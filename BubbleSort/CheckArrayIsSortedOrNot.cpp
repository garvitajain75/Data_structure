#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Array is sorted";
    else cout<<"Array is not sorted";
}