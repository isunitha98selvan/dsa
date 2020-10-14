// Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct item
{
    int value;
    int weight;
};

bool ratioCompare(item i1, item i2)
{
    double r1 = i1.value/i1.weight;
    double r2 = i2.value/i2.weight;
    return r1>r2;
}
int main(){
    int n;
    int c;
    cin>>n>>c;
    item arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].value>>arr[i].weight;
    }

    // sort by value/weight ratio
    sort(arr,arr+n,ratioCompare);
    double max_value = 0.0;
    int cur_weight = 0;
    for(int i=0;i<n;i++)
    {
        if(cur_weight+arr[i].weight<=c)
        {
            cur_weight+= arr[i].weight;
            max_value+=arr[i].value;
        }
        else
        {
            int remain = c - cur_weight;
            max_value+= (remain/(double)arr[i].weight)*arr[i].value;
            break;
        }
    }
    cout<<max_value;
}
    