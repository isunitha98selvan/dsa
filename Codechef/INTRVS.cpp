#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int notSolved = 0;
        bool tooSlow = false;
        bool morethanOne = false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==-1)
                notSolved++;
            if(arr[i]>k)
                tooSlow = true;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && arr[i]!=1)
                morethanOne=true;
        }
        if(notSolved>ceil(n/2))
            cout<<"Rejected"<<endl;
        else if(tooSlow)
            cout<<"Too Slow"<<endl;
        else if(morethanOne==false)
            cout<<"Bot"<<endl;
        else
            cout<<"Accepted"<<endl;

    }
}