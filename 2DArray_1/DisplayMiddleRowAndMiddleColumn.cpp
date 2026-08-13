#include<iostream>
using namespace std;
void display(int arr[10][10],int n){
    int k=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==k || j==k) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter no. of rows and columns : ";
    cin>>n;
    int a[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    display(a,n);
}