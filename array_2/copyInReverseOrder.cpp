#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++){
        //i+j=v.size()-1
        int j=v.size()-1-i;
        v2[i]=v[j];
    }

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}