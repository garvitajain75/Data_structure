#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,3,6,4};
    int n = 6;
    bool flag = true;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            flag=false;
            break;
        }
    }

    if(flag == true) cout<<"Array is almost sorted";
    else cout<<"Array is not sorted";
}