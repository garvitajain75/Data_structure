#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={4,6,8,34,98,56,7,87,23,45,38};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) {
            tmax=smax;
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
        else if(arr[i]>tmax && arr[i]!=smax && arr[i]!=max){
            tmax=arr[i];
        }
    }
    cout<<max<<endl<<smax<<endl<<tmax;
}
