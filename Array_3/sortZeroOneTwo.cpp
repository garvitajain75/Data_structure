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
    int notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
}

// Dutch Flag Algorithm
void sortm2(vector<int>& v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
        while(mid<=high){
            if(v[mid]==2){
                // swap(mid,high)
                int temp=v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }
            else if(v[mid]==0){
                // swap(mid,low)
                int temp=v[mid];
                v[mid]=v[low];
                v[low]=temp;
                low++;
                mid++;
            }
            else if(v[mid]==1){
                mid++;
            }
        }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    display(v);
    // sortm1(v);
    sortm2(v);
    display(v);
}