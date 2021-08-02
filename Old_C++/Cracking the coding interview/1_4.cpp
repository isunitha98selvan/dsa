#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool checkPalindrome(string str1) {
    int countOdd=0;
    unordered_map<char,int> umap;
    for(int i=0;i<str1.length();i++) {
        if(str1[i]==' ') continue;
        umap[tolower(str1[i])]+=1;
        if(umap[tolower(str1[i])]%2==1)
            countOdd++;
        else
            countOdd--;
    }
   
    return countOdd<=1;
}
int main() {
   cout<<checkPalindrome("Tact Coa");
}
