#include <iostream>
#include <string>
#include <bits/stdc++.h>

string compress(string str) {
    string result = "";
    int countOcc = 1;
    for(int i=1;i<str.length();i++) {
        if(str[i]==str[i-1])
            countOcc++;
        else
        {
            result+=str[i];
            result+=to_string(countOcc);
        }   
    }
    return result;
}

int main() {
    cout<<compress("aabcccddeeee");
}
