#include<iostream>
#include<climits>
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

    int sum1=INT_MIN,k;
    for(int i=0;i<m;i++){
        int sum2=0;
        for(int j=0;j<n;j++){
            sum2+=a[i][j];
        }
        if(sum2>sum1) {
            sum1=sum2;
            k=i;
        }
    }
    cout<<k;
}