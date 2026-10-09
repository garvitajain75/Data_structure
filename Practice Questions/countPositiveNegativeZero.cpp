#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int countP=0 , countN=0 , countZ=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0) countP++;
        else if(arr[i]<0) countN++;
        else if(arr[i]==0) countZ++;
    }
    cout<<"Total positive terms : "<<countP <<endl;
    cout<<"Total negative terms : "<<countN <<endl;
    cout<<"Total zeros : "<<countZ <<endl;
}