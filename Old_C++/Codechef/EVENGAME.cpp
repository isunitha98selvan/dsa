#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int countOdd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0)
                countOdd++;
        }
        if(countOdd%2==0){
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
}