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

    if(n==p){
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

        // resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] +
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
                
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices cannot be multiplied.";
    }
    
}