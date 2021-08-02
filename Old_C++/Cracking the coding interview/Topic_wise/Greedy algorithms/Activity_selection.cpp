#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct activity
{
    int start;
    int finish;
};

bool activityCompare(activity a1, activity a2){
    return a1.finish<a2.finish;
}
int main(){
    int n;
    cin>>n;
    activity arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }

    // Sort by finish time
    sort(arr,arr+n,activityCompare);
    
    // pick first activity
    int j =0;
    cout<<arr[0].start<<" "<<arr[0].finish<<endl;
    for(int i=1;i<n;i++)
    {
        // Pick activity with start time greater than prev finish time.
        if(arr[i].start>=arr[j].finish)
        {
            j=i;
            cout<<arr[i].start<<" "<<arr[i].finish<<endl;
        }
    }
}