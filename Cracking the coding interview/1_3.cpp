#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool checkPermutation(string str1, string str2) {
    if(str1.length()!=str2.length())
        return false;
    unordered_map<char,int> umap;
    for(int i=0;i<str1.length();i++) {
        umap[str1[i]]+=1;
    }
    for(int i=0;i<str2.length();i++) {
        if(umap[str2[i]]==0)
            return false;
        else
            umap[str2[i]]-=1;
    }
    return true;
}
int main() {
   cout<<checkPermutation("hellow","ellohh");

}
