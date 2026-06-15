#include<iostream>
using namespace std;
int main(){
    //1.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }


    //2.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //         }
    //     for(int k=1;k<=2*i-1;k++){
    //             cout<<(char)(64+k);
    //         }
    //         cout<<endl;
    //     }


    //3.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //         }
    //     for(int k=i;k>=1;k--){
    //         cout<<(char)(64+k);
    //     }
    //     for(int z=2;z<=i;z++){
    //         cout<<(char)(64+z);
    //     }
    // cout<<endl;
    // }


    //4.
    // int n;
    // cout<<"Enter numbr of row : ";
    // cin>>n;
    // for(int i=1;i<=2*n-1;i++){
    //     cout<<(char)(i+64);
    // }
    // cout<<endl;
    // int nsp=1;
    // for(int i=1;i<=n-1;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<(char)(j+64);
    //     }
    //     for(int j=1;j<=nsp;j++){
    //         cout<<" ";
    //     }
    //     nsp+=2;
    //     for(int k=n+i;k<=2*n-1;k++){
    //         cout<<(char)(k+64);
    //     }
    //     cout<<endl;
    // }


    //5.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=2*n-1;i++){
    //     if(i>n) a=2*n-i;
    //     cout<<a;
    //     a++;
    // }
    // cout<<endl;
    // int m=n-1;
    // int nsp=1;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=m+1-i;j++){
    //         cout<<j;
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         cout<<" ";
    //     }
    //     nsp+=2;
    //     for(int z=m+1-i;z>=1;z--){
    //         cout<<z;
    //     }
    //     cout<<endl;
    // }


    //6.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // int nsp=2*n-3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=1;k++){
    //         cout<<"*";
    //     }
    //     for(int z=1;z<=nsp;z++){
    //         cout<<" ";
    //     }
    //     nsp-=2;
    //     if(i!=n) printf("*");
    //     cout<<endl;
    // }

    
    //7.
    //  int n;
    //  cout<<"Enter number of row : ";
    //  cin>>n;
    //  int nsp=n-1;
    //  int x=0;
     
    // for(int i=1;i<=2*n-1;i++){
    //     for(int j=1;j<=nsp;j++){
    //         cout<<" ";
    //     }
    //     if(i<n) nsp--;
    //     else nsp++;

    //     cout<<"*";

    //     for(int k=1;k<=x;k++){
    //         cout<<" ";
    //     }
    //     if(i>1&&i<n) x+=2;
    //     else if(i>=n && i<2*n-1) x-=2;
    //     if(i==2*n-1) x--;
    //     if(i==1) x++;
        
    //     if(i!=1 && i!=2*n-1) cout<<"*";
    //     cout<<endl;
    // }


    //8.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // int x=0;
    // for(int i=1;i<=n;i++){

    //     //spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     //number
    //     cout<<i;

    //     //spaces
    //     for(int j=1;j<=x;j++){
    //         cout<<" ";
    //     }
    //     if(i<=1) x++;
    //     else x+=2;
    //     //number
        
    //     if(i>1) cout<<i;
    //     cout<<endl;
    // }

    
    //9.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // int nsp=1;
    // int x=1;
    // for(int i=1;i<=n;i++){
        
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i>2) {
    //         for(int j=1;j<=nsp;j++){
    //         cout<<" ";
    //         }
    //         nsp++;
    //     }
        
    //     if(i!=1) cout<<"*";
    //     if(i>2) {
    //         for(int j=1;j<=x;j++){
    //         cout<<" ";
    //         }
    //         x++;
    //     }
       
    //     if(i!=1) cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=1;i<=2*n+1;i++){
    //     cout<<"*";
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i<n-1){
    //         for(int j=1;j<=n-i-1;j++){
    //             cout<<" ";
    //         }
    //     }
    //     if(i!=n) cout<<"*";
    //     if(i<n-1){
    //         for(int j=1;j<=n-i-1;j++){
    //             cout<<" ";
    //         }
    //     }
    //     if(i!=n) cout<<"*";
    //     cout<<endl;

    // }


    //11.
    // int n;
    // cout<<"Enter number of row : ";
    // cin>>n;
    // int nst=n-1;
    // int x=nst;
    // int nsp=1;
    // for(int i=1;i<=2*n-1;i++){
    //     if(i==1 || i==2*n-1){
    //         for(int j=1;j<=2*n-1;j++){
    //             cout<<"*";
    //         }
           
    //     }
    //     else if(i>1 && i<2*n-1){
    //         for(int j=1;j<=nst;j++){
    //             cout<<"*";
    //         }
    //         if(i<n) nst--;
    //         else nst++;

    //         for(int k=1;k<=nsp;k++){
    //             cout<<" ";
    //         }
    //         if(i<n) nsp+=2;
    //         else nsp-=2;

    //         for(int j=1;j<=x;j++){
    //             cout<<"*";
    //         }
    //         if(i<n) x--;
    //         else x++;
            
    //     }
    //     cout<<endl;
    // }

}


