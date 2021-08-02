#include <iostream>
#include <unordered_map>
using namespace std;

long long int fibUtil(int n, unordered_map<int,long long int>&memo){
  if(n<=2)
    return 1;
  if(memo.find(n)!=memo.end()){
    return memo[n];
  }
  memo[n] = fibUtil(n-1,memo) + fibUtil(n-2,memo);
  return memo[n];
}

long long int fib(int n){
  unordered_map<int,long long int> memo;
  return fibUtil(n,memo);
}

int main(){
  int n;
  cin>>n;
  cout<<fib(n)<<endl;
}
