#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int expected=1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==expected) expected++;
        else{
            cout<<expected;
            break;
        } 
    }
}

