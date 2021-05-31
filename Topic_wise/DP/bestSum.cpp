#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> result;
bool howSumUtil(int target, int n, int arr[n], unordered_map<int,bool>&memo);

bool how_sum(int target, int n, int arr[n]){
    unordered_map<int,bool> memo;
    return howSumUtil(target,n,arr,memo);
}

bool howSumUtil(int target, int n, int arr[n], unordered_map<int,bool>&memo){
    if(memo.find(target)!=memo.end())   
        return memo[target];
    if(target==0) return true;
    if(target<0) return false;
    
    for(int i=0;i<n;i++){
        int rem = target - arr[i];
        if(howSumUtil(rem,n,arr,memo)){
            memo[target]= true;
            result.push_back(arr[i]);
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
    cout<<how_sum(target,n,arr)<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}