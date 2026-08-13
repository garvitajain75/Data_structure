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
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) {
            smax=max;
            max=arr[i];
        }
        else if((arr[i]>smax) && (arr[i]!=max)){
            smax=arr[i];
        }
    }

    if(smax==INT_MIN) cout<<"No second element found";
    else{
        cout<<"Maximum element is : "<<max<<endl;
        cout<<"Second maximum element is : "<<smax;
    }
}