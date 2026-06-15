#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int x;
    x=(int)ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"Given character is a vowel";
    }
    else if((x>=65 && x<=90)||(x>=97 && x<=122)){
        cout<<"Given character is a consonant";
    }
    else{
        cout<<"Not an alphabet";
    }
}