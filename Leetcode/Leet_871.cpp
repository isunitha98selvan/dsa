// input - target : miles
//  startFuel - how much gas it has initially
// stations - 2d array : how many miles, how much gas is available
// output - least number of refuelling stops

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int minstops(int target, int startFuel, int station[][2])
{
    // base case: no refuelling
    if(startFuel-target>=0)
        return 0;
    
}
int main(){
    int target;
    int startFuel;
    int num_stations;
    cin>>target;
    cin>>startFuel;
    cin>>num_stations;
    int station[num_stations][2];
    for(int i=0;i<num_stations;i++)
    {
        int miles,gas;
        cin>>miles>>gas;
        station[i][0] = miles;
        station[i][1] = gas;
    }
    cout<<minstops(target,startFuel,station)<<endl;
}