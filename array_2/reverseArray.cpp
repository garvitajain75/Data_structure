#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>& a){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

void reverse(vector<int>& a){
    int i=0;
    int j=a.size()-1;
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(10);
    v.push_back(19);
    v.push_back(6);
    v.push_back(1);

    display(v);

    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // display(v);

    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }

    // reversePart(1,4,v);
    reverse(v);
    display(v);
}