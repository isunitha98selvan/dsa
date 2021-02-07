// Input : target sum and array of numbers
// Output: combination of elements which give target sum, else null
// If there are multiple combinations, output any one combination

#include <iostream>
#include <vector>
using namespace std;

vector<int> how_sum(int target,int n, int arr[n]){
    if(target==0)
        return vector<int>();
    for(int i=0;i<n;i++){
        int rem = target - arr[i];
        if(rem>=0){
            vector<int> combination = how_sum(rem,n,arr);
            if (combination.size()) {
                combination.push_back(rem);
                return combination;
            }
        }
    }
    return NULL;
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
    vector<int> result = how_sum(target,n,arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" "<<endl;
    }
}