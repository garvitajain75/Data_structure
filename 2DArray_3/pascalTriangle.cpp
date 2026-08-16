#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    vector< vector<int> > v;
    for(int i=0;i<m;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }

    // Generate
    for(int i=0;i<m;i++){
        for(int j=0;j<i+1;j++){
            if(j==i || j==0) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }

    // Print
    for(int i=0;i<m;i++){
        for(int j=0;j<i+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}