#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,4,6,8,23,45,5,9,34,23,12,11};
    int sum1 = 0, sum2 = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){ 
        if(i%2==0) sum1 = sum1 + arr[i];
        else sum2 = sum2 + arr[i];
    }
    cout<<"Difference between even-index sum and odd-index sum = "<< sum1 - sum2;
}