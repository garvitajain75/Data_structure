#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[]={1,5,12,36,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}