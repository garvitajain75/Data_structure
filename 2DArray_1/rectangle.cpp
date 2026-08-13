#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows in 1 matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns in 1 matrix : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int l1,r1,l2,r2;
    cout<<"Enter l1 and r1 : ";
    cin>>l1>>r1;
    cout<<"Enter l2 and r2 : ";
    cin>>l2>>r2;

    int sum=0;
    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for(int j=min(r1,r2);j<=max(r1,r2);j++){
            sum+=a[i][j];
        }
    }
    cout<<sum;
}