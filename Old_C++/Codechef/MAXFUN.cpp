#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            sum += abs(arr[i] - arr[i-1]);
        }
        sum+= abs(arr[n-1] - arr[0]);
        cout<<sum<<endl;
    }
}