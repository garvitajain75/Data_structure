#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(16);
    cout<<v.size()<<" "<<v.capacity()<<endl;
}