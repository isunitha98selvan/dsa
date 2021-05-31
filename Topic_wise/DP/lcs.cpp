// Longest common subsequence problem

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string,int> memo;

int lcs(string s1, string s2, int m, int n){
    if(m==0 || n==0)    return 0;
    if(s1[m-1]==s2[n-1]) 
        return 1+lcs(s1,s2,m-1,n-1);
    return max(lcs(s1,s2,m-1,n), lcs(s1,s2,m,n-1));
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    int m = s1.size();
    int n = s2.size();
    cout<<lcs(s1,s2,m,n);
}