#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(19);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int n=arr1.size();
    int m=arr2.size();

    vector<int> arr3(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i==n){  // arr1 k sare elements ko utha chuka hai
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    else if(j==m){    // arr2 k sare elements ko utha chuka hai
        while(i<n){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }

    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}