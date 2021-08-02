#include <iostream>
#include <unordered_set> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        int arr[n];
        unordered_set<int> uset;
        int max_num = -1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            uset.insert(arr[i]);
            max_num = max(max_num,arr[i]);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%k!=0){
                int ans = arr[i]/k;
                int j=1;
                int new_num = 0;
                while(new_num<=max_num){
                    new_num = k*(ans+j) - arr[i];
                    if(uset.find(new_num)!=uset.end()){
                        count++;
                        new_num = max_num+1;
                    }
                    else
                        j++;
                }

            }
            else
                count++;
        }
        if(count==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}