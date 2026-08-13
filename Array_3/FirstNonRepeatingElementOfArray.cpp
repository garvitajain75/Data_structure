#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    v[0] = 2;
    v[1] = 1;
    v[2] = 3;
    v[3] = 4;
    v[4] = 3;
    v[5] = 5;
    v[6] = 3;

int i,j;
    for(i = 0 ; i<v.size() ; i++){
        for(j = 0 ; j<v.size() ; j++){
            if(i!=j && v[i]==v[j]) break;
            }
        if(j==v.size()){
            cout<<v[i];
            break;
        }
    }
    return 0;
}