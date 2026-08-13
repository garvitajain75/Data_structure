#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,4,8,6};
    int* ptr=arr;
    cout<<arr<<endl;
    ptr[0]=100;
    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    // }

    // for(int i=0;i<5;i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // ptr=arr;

    *ptr=10; //ptr pointing to arr[0]
    ptr++;  //ptr pointing to arr[1]
    *ptr=8;
    ptr--; //ptr pointing to arr[0]
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
}