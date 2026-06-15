#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the amount : ";
    cin>>x;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;
    switch(x>=2000){
        case 1:
            n2000=x/2000;
            x-=n2000*2000;
            cout<<"notes of 2000 = "<<n2000<<endl;
            break;
    }
    switch(x>=500){
        case 1:
            n500=x/500;
            x-=n500*500;
            cout<<"notes of 500 = "<<n500<<endl;
            break;
    }
    switch(x>=200){
        case 1:
            n200=x/200;
            x-=n200*200;
            cout<<"notes of 200 = "<<n200<<endl;
            break;
    }
    switch(x>=100){
        case 1:
            n100=x/100;
            x-=n100*100;
            cout<<"notes of 100 = "<<n100<<endl;
            break;
    }
    switch(x>=50){
        case 1:
            n50=x/50;
            x-=n50*50;
            cout<<"notes of 50 = "<<n50<<endl;
            break;
    }
    switch(x>=20){
        case 1:
            n20=x/20;
            x-=n20*20;
            cout<<"notes of 20 = "<<n20<<endl;
            break;
    }
    switch(x>=10){
        case 1:
            n10=x/10;
            x-=n10*10;
            cout<<"notes of 10 = "<<n10<<endl;
            break;
    }
    switch(x>=5){
        case 1:
            n5=x/5;
            x-=n5*5;
            cout<<"notes of 5 = "<<n5<<endl;
            break;
    }
    switch(x>=2){
        case 1:
            n2=x/2;
            x-=n2*2;
            cout<<"notes of 2 = "<<n2<<endl;
            break;
    }
    switch(x>=1){
        case 1:
            n1=x/1;
            x-=n1*1;
            cout<<"notes of 1 = "<<n1<<endl;
            break;
   }
}