#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of n : ";
    cin>>n;
//     int nst=2*n-3;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=nst;k++){
//             cout<<"*";
//         }
//         nst-=2;
//         cout<<endl;
//     }

int nsp=n-1;
int nst=1;
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }
    if(i<=n-1) nsp--;
    else nsp++;
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<=n-1) nst+=2;
    else nst-=2;
    cout<<endl;
}

}