#include <iostream>

using namespace std;

struct activity{
    int index;
    int begin;
    int end;
    string person;
};

bool sortfn(activity a, activity b){
    return a.begin<b.begin;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        activity a[n];
        for(int j=0;j<n;j++){
            cin>>a[j].begin>>a[j].end;
            a[j].index = j;
        }
        sort(a, a+n, sortfn);
        
        char result[n+1];
        int flag = 0;
        int cEnd = 0;
        int jEnd = 0;
        for(int k=0;k<n;k++){
           if(a[k].begin>=cEnd){
               cEnd = a[k].end;
               result[a[k].index] = 'C';
           }
           else if (a[k].begin>=jEnd){
               jEnd = a[k].end;
               result[a[k].index] = 'J';
           }
           else {
               flag = -1;
               break;
           }
        }
	result[n]=0;
        if(flag==-1) cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<endl;
	else cout<<"Case #"<<i+1<<": "<<result<<endl;
  }
}
