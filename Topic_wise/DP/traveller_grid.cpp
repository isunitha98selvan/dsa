// Imagine you have to travel in a m*n grid from the top left to bottom right.
// You can only move right or bottom. In how many ways can you reach the bottom right?

// notes
// grid(a,b) = grid(b,a)
// Time: O(n*m) 
#include <iostream>
using namespace std;

long long int matrix[100][100];
long long int grid(int n, int m) {
    if(n==0 || m==0) return 0;
    if(n==1 || m==1) return 1;
    if(matrix[n][m]!=0) return matrix[n][m];
    matrix[n][m] =  grid(n-1,m)+grid(n,m-1);
    return matrix[n][m];
}
int main(){
    int n,m;
    cin>>n>>m;
    int matrix[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            matrix[i][j]=0;
        }
    }
    cout<<grid(n,m)<<endl;

}