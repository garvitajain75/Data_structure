#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sortm2(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(-52);
    v.push_back(24);
    v.push_back(52);
    v.push_back(-98);
    v.push_back(-9);
    v.push_back(90);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    display(v);
    // sortm1(v);
    sortm2(v);
    display(v);
}