#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr(3);
    arr[0]=2;
    arr[1]=3;
    arr[2]=1;
    
    int n = arr.size();
    int idx = -1;

    // Finding pivot idx
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }

    if(idx==-1){
        reverse(arr.begin(),arr.end());
    }

    // Sorting element from idx+1 to end
    reverse(arr.begin()+idx+1,arr.end());

    //Finding next greater element then idx 
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(arr[i]>arr[idx]){
            j = i;
            break;
        }
    }

    //Swapping j and idx 
    int temp = arr[j];
    arr[j] = arr[idx];
    arr[idx] = temp;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}