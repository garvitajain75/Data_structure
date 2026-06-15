#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count ++;
    }
    cout<<count;
}