#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks of student: ";
    cin>>n;
//     if((n>90)&&(n<=100)){
//         cout<<"Excellent";
//     }
//     else if((n>80)&&(n<=90)){
//         cout<<"Very Good";
//     }
//     else if((n>70)&&(n<=80)){
//         cout<<"Good";
//     }
//     else if((n>60)&&(n<=70)){
//         cout<<"Can do better";
//     }
//     else if((n>50)&&(n<=60)){
//         cout<<"Average";
//     }
//     else if((n>40)&&(n<=50)){
//         cout<<"Below Average";
//     }
//     else if(n<40){
//         cout<<"Fail";
//     }
// }

if(n>=91){
    cout<<"Excellent";
}
else{
    if(n>=81){
        cout<<"Very Good";
    }
    else{
        if(n>=71){
            cout<<"Good";
        }
        else{
            if(n>=61){
                cout<<"Can do better";
            }
            else{
                if(n>=51){
                    cout<<"Average";
                }
                else{
                    if(n>=40){
                        cout<<"Below Average";
                    }
                    else{
                            cout<<"Fail";
                        }
                    }
                }
            }
        }
    }
}