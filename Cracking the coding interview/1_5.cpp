#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool checkInsert(string str1, string str2){
    int i=0;
    int j=0;
    int flag = 0;
    while(i<str1.length() && j<str2.length()){
        if(str1[i]!=str2[j]) {
            if(flag) return false;
            else {
                flag = 1;
            }
        }
       else j++;
        i++;
    }
    return true;
}
bool checkEdit(string str1, string str2) {
    int flag = 0;
    if(str1.length()==str2.length()) {
        for(int i=0;i<str1.length();i++) {
            if(str1[i]!=str2[i]){
                if(flag)
                    return false;
                else
                    flag = 1;
            }
        }
    }
    else if(str1.length()==str2.length()+1){
        return checkInsert(str1,str2);
    }
    else if(str2.length()==str1.length()+1){
        return checkInsert(str2,str1);
    }
    else return false;
        
   return true;
    
}
int main() {
    cout<<checkEdit("pale", "ple");
    cout<<checkEdit("pales","pale");
    cout<<checkEdit("pale","bale");
    cout<<checkEdit("pale","bake");
}
