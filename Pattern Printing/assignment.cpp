#include<iostream>
using namespace std;
//2.
// int main(){
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//      for(int i=1;i<=n;i++){
//          for(int j=1;j<=n-i+1;j++){
//              cout<<j;
//          }
//          cout<<endl;
//      }
// }

//3.
// int main(){
//     int n;
//     cout<<"enter number of row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(64+j)<<" ";
//         }
//         cout<<endl;
//     }
// }

//4.
// int main(){
//     int n;
//     cout<<"Enter number of row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0) cout<<j;
//             else cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }

// }

//5.
// int main(){
//     int n;
//     cout<<"Enter number of row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//6.
// int main(){
//     int m,n;
//     cout<<"Enter number of row : ";
//     cin>>m;
//     cout<<"Enter number of column : ";
//     cin>>n;
//     // for(int i=1;i<=m;i++){
//     //     if(i==1||i==m){
//     //         for(int j=1;j<=n;j++){
//     //             cout<<"*";
//     //         }
//     //     }
//     //     else{
//     //         for(int k=1;k<=n;k++){
//     //             if(k==1||k==n) cout<<"*";
//     //             else cout<<" ";
//     //         }
//     //     }
//     //     cout<<endl;
        
//     // }

//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||i==m||j==1||j==n){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

//7.
// int main(){
//     int n;
//     cout<<"Enter number of row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=n;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//8.
// int main(){
//     int n;
//     cout<<"Enter number or row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//9.
// int main(){
//     int n;
//     cout<<"Enter number of row : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<(char)(64+k);
//         }
//         cout<<endl;
//     }
// }

//10.
// int main() {
//     int n;
//     cout<<"Enter number of row : ";
//     cin >> n;
//     for(int i =1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//11.
int main(){
    int n;
    cout<<"Enter numbre of row : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}