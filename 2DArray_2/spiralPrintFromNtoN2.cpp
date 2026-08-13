#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int a[n][n];
    int minr=0, minc=0;
    int maxr=n-1, maxc=n-1;
    int k=1;
    while(k<=n*n){
        // right
        for(int j=minc;j<=maxc;j++){
            a[minr][j]=k;
            k++;
        }
        minr++;

        //down
        for(int i=minr;i<=maxr;i++){
            a[i][maxc]=k;
            k++;
        }
        maxc--;

        //left
        for(int j=maxc;j>=minc;j--){
            a[maxr][j]=k;
            k++;
        }
        maxr--;

        //up
        for(int i=maxr;i>=minr;i--){
            a[i][minc]=k;
            k++;
        }
        minc++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
}