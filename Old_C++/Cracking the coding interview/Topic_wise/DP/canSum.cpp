#include <iostream>
#include <unordered_map>
using namespace std;

bool canSumUtil(int target, int n, int arr[n], unordered_map<int,bool>&memo);

bool can_sum(int target, int n, int arr[n]){
    unordered_map<int,bool> memo;
    return canSumUtil(target,n,arr,memo);
}

bool canSumUtil(int target, int n, int arr[n], unordered_map<int,bool>&memo){
    if(memo.find(target)!=memo.end())   
        return memo[target];
    if(target==0) return true;
    if(target<0) return false;
    
    for(int i=0;i<n;i++){
        int rem = target - arr[i];
        if(canSumUtil(rem,n,arr,memo)){
            memo[target]= true;
            return true;
        }
    }
    memo[target] = false;
    return false;
}
int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<can_sum(target,n,arr)<<endl;
}