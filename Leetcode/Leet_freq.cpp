//  Given an array of sorted integers, find frequency of given target value
#include <iostream>

using namespace std;

int binSearch(int arr[],int n, int target)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int target;
    cin>>target;
    int index = binSearch(arr,n,target);
    int leftIndex = index;
    int rightIndex = index;

    if(index ==-1)
        cout<<"Element not found";
    else
    {
        while(arr[leftIndex]==target && leftIndex>=0) 
            leftIndex--;
        while (arr[rightIndex]==target && rightIndex<n)
        {
            rightIndex++;
        }
        cout<<rightIndex - leftIndex -1;
    }
}