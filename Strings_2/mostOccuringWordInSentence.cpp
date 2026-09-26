#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "Raghav is a maths Teacher. He is a DSA mentor as well .";
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }

    // print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    sort(v.begin(),v.end());

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    int maxcount=1;
    int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxcount = max(maxcount , count);
    }

    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count == maxcount) cout<<v[i]<<" "<<maxcount<<endl;
    }
}