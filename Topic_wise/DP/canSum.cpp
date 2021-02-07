// Given a target sum and an array of numbers, return whether the target sum can be generated
// using those numbers. You can use the same number multiple times.
// All numbers are non-negative.

//Runtime: O(m*n)

#include <iostream>
using namespace std;

int memo[100] = {-1};

bool can_sum(int target, int n, int arr[n]){
    if(memo[target]!=-1)
        return memo[target];
    if(target==0)
        return true;
    if(target<0)
        return false;
    for(int i=0;i<n;i++){
        int rem = target-arr[i];
        if(can_sum(rem,n,arr)) {
            memo[target]=true;
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
    for(int i=0;i<100;i++){
        memo[i] = -1;
    }
    int target;
    cin>>target;
    cout<<can_sum(target,n,arr)<<endl;
}