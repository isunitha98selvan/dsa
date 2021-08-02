#include <iostream>
#include <unordered_set>

using namespace std;
int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
	cin>>n;
        int matrix[n][n];
        int trace = 0;
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                cin>>matrix[j][k];
                if(j==k){
	            cout<<matrix[i][j];
                    trace+=matrix[j][k];
		}
            }
        }

        // checkLatin logic: 
        int rows=0;
        int columns=0;
        for(int i=0;i<n;i++){
            unordered_set<int> uset;
            for(int j=0;j<n;j++) {
                if(uset.find(matrix[i][j])==uset.end())
                    uset.insert(matrix[i][j]);
                else {
                    rows++;
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++) {
            unordered_set<int> uset;
            for(int j=0;j<n;j++) {
                if(uset.find(matrix[j][i])==uset.end())
                    uset.insert(matrix[j][i]);
                else {
                    columns++;
                    break;
                }
            }
        }
        
        
        cout<<"Case #"<<i<<": "<<trace<<" "<<rows<<" "<<columns<<endl;
    }
}
