#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of column : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}













    // 1 2 3 4        1 5 9 5    0,0  0,1  0,2  0,3
    // 5 6 7 8        2 6 1 3    1,0  1,1  1,2  1,3
    // 9 1 6 3        3 7 6 1    2,0  2,1  2,2  2,3
    // 5 3 1 9        4 8 3 9    3,0  3,1  3,2  3,3

