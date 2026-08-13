#include<iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={3,5,4,6,8,23,45,5,9,34,23,12,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    for(int i=0;i<n;i++){ 
        if(i%2==0) arr[i] = arr[i]+10;
        else arr[i]=arr[i]*2;
    }
    cout<<"New array is : "<<endl;
    display(arr,n);
}