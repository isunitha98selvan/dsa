#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set<int> subarrays;
int findans(int x)
{
    // return max j such that j<=x
    auto it = subarrays.upper_bound(x);
    it--;
    return (*it);
}

void remove(int x)
{
    subarrays.erase(x);
}

int main() {
    int n,q;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    subarrays.insert(1);
    for(int i=2;i<=n;i++)
    {
        if(a[i]%a[i-1]!=0)
            subarrays.insert(i);
    }
    while(q--) {
        int type,i;
        cin>>type>>i;
        if(type==1)
        {
            cin>>a[i];
            // update the partition
            if(i>1)
            {
                if(findans(i) == i && a[i]%a[i-1]==0)
                    remove(i);
                if(findans(i)<i && a[i]%a[i-1]!=0)
                    subarrays.insert(i);
            }
            if(i<n){
                if(findans(i+1)>i && a[i+1]%a[i]==0){
                    remove(i+1);
                }
                if(findans(i+1)<=i && a[i+1]%a[i]!=0){
                    subarrays.insert(i+1);
                }
            }
        }
        else
        {
            cout<<findans(i)<<endl;
        }
    }
}
