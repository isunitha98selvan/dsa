#include <iostream>
using namespace std;

long long int fib(long long int n){
  long long int memo[n+1];
  memo[0] = 0;
  memo[1] = 1;
  for(long long int i=2;i<=n;i++){
    memo[i] = memo[i-1]+memo[i-2];
  }
  return memo[n];
}
int main(){
  int n;
  cin>>n;
  cout<<fib(n)<<endl;
}
