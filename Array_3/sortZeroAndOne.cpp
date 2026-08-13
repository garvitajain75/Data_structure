#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sortm1(vector<int>& v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    //filling
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}

void sortm2(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1; 
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    // sortm1(v);
    sortm2(v);
    display(v);
}