//  Given an array of n numbers, sorted in non-decreasing order, and k queries. For each query, print the maximum index of an array element not greater than the given one.

#include <iostream>

using namespace std;

int findClosestRight(int arr[],int n, int target)
{
    int low = 0;
    int high = n-1;
    int index = n+1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]<target)
            low = mid+1;
        else if(arr[mid]>=target)
        {
            index = mid+1;
            high = mid-1;
        }
    }
    return index;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int target;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>target;
        cout<<findClosestRight(arr,n,target)<<endl;
    }
}
