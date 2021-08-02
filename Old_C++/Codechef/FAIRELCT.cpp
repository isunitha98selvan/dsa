#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,m;
        cin>>n>>m;
        int john_vote = 0;
        int joe_vote = 0;
        vector<int> john(n);
        vector<int> joe(m);
        for(int j=0;j<n;j++){
            cin>>john[j];
            john_vote+=john[j];
        }
        for(int j=0;j<m;j++){
            cin>>joe[j];
            joe_vote+=joe[j];
        }
        
        if(john_vote<=joe_vote) {
            int swaps=0;
            sort(john.begin(), john.end());
            sort(joe.begin(), joe.end(), greater<int>());
            for(int i=0;i<n;i++){
                john_vote-=john[i];
                john_vote+=joe[i];
                joe_vote+=john[i];
                joe_vote-=joe[i];
                swaps++;
                if(john_vote>joe_vote)
                    break;
            }
            if(john_vote>joe_vote)
                cout<<swaps<<endl;
            else 
                cout<<-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}