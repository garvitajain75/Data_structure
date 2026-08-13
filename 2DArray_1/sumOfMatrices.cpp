#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows in 1 matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns in 1 matrix : ";
    cin>>n;
    int p;
    cout<<"Enter no. of rows in 2 matrix : ";
    cin>>p;
    int q;
    cout<<"Enter no. of columns in 2 matrix : ";
    cin>>q;

    cout<<"Enter first matrix : ";
    cout<<endl;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter second matrix : ";
    cout<<endl;
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            b[i][j]+=a[i][j];
        }
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}