#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int max = INT_MIN;
    int min = INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout<<"Largest Number is : "<<max<<endl;
    cout<<"Smallest Number is : "<<min;
}