#include <iostream>

using namespace std;

int main(){
    int t;
    int n,k,d;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n>>k>>d;
        int a[n];
        int total_problems = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total_problems+=a[i];
        }
        int days = total_problems/k;
        if(days>d)
            days=d;
        cout<<days<<endl;
    }
}
