#include <iostream>
#include <unordered_map>

using namespace std;

long long int gridUtil(int n,int m, unordered_map<string, long long int>&memo){
    string key = to_string(n) + "," + to_string(m);
    if(n==0 || m==0) return 0;
    if(n==1 || m==1) return 1;
    if(memo.find(key)!=memo.end())
        return memo[key];
    memo[key] = gridUtil(n-1,m,memo) + gridUtil(n,m-1,memo);
    return memo[key];
}

long long int grid(int n, int m){
    unordered_map<string,long long int> memo;
    return gridUtil(n,m,memo);
}


int main(){
    int n;
    int m;
    cin>>n>>m;
    cout<<grid(n,m)<<endl;
}