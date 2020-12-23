#include <iostream>
#include <string>
#include <bits/stdc++.h>

void rotateMatrix(int matrix[4][4], int n){
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++) {
            int offset = j-i;
            int temp = matrix[i][j];
            //left to top
            matrix[i][j] = matrix[n-1-i-offset][i];
            // bottom to left
            matrix[n-i-1-offset][i] = matrix[n-1-i][n-i-1-offset];
            
            matrix[n-1-i][n-i-1-offset] = matrix[j][n-i-1];
            
            matrix[j][n-i-1] = temp;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int matrix[4][4] = {{1,2,3,0},{4,5,6,0},{7,8,9,0},{1,1,1,0}};
    rotateMatrix(matrix,4);
}
