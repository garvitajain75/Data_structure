#include <iostream>
using namespace std;
int main(){
    int arr1[]={2,3,5,6,4,7,8,2};
    int arr2[]={6,2,2};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int visited[n]={0};

    bool flag = false;
    for(int j=0;j<m;j++){
        for(int i = 0;i<n;i++){
            if(arr2[j]==arr1[i] && visited[i]==0) {
                flag = true;
                visited[i]=1;
                break;
            }
            else{
                flag = false;
            }
        }
        if(flag==false) break;
    }
    if(flag == false) cout<<"Array is not a subset";
    else cout<<"It is a subset";
}