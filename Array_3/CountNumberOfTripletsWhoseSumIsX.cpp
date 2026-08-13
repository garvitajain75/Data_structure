#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height(7);
    height[0] = 2;
    height[1] = 3;
    height[2] = 1;
    height[3] = 4;
    height[4] = 6;
    height[5] = 2;
    height[6] = 4;
    
    int count=0;
    int n=height.size();
    int num = 7;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(height[i]+height[j]+height[k] == num) count++;
            }
        }
    }
    cout<<count;
}
