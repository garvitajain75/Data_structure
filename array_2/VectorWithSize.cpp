#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[3];

    // vector<int> v(5,7); 
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v[3];
}