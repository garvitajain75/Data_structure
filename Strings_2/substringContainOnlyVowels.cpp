#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
    string str;
    cin >> str;
    int count = 0, len = 0;

    for (int i = 0; i < str.size(); i++) {
        if (isVowel(str[i])) {
            len++;  
            count += len;  // add all substrings ending here
        } else {
            len = 0;  // reset when consonant appears
        }
    }

    cout << count;
    return 0;
}
