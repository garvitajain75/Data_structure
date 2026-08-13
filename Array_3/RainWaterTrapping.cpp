#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> height(12);
    height[0] = 0;
    height[1] = 1;
    height[2] = 0;
    height[3] = 2;
    height[4] = 1;
    height[5] = 0;
    height[6] = 1;
    height[7] = 3;
    height[8] = 2;
    height[9] = 1;
    height[10] = 2;
    height[11] = 1;

    int n=height.size();

    //previous greatest element 
    vector<int> prev(n);
    prev[0]=-1;
    int max = height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(height[i]>max) max = height[i];
    }

    //next greatest element and minimum
    prev[n-1]=-1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        if(max<prev[i]) prev[i]=max;
        if(height[i]>max) max = height[i];
    }

    //calculating water
    int water = 0;
    for(int i = 1 ; i<n-1 ; i++){
        if(prev[i]>height[i]){
            water += prev[i] - height[i];
        }
    }
    cout<<water;
}
