#include <iostream>
#include <string>

using namespace std;
int main() {
    int t=0;
    cin>>t;
    string str;
    for(int i=0;i<t;i++){
        cin>>str;
        string result = "";
        int brackets = 0;
        for(int j=0;j<str.length();j++) {
            int num = str[j]-'0';
            while(num>brackets){
                result+="(";
                brackets++;
            }
            while(num<brackets){
                result+=")";
                brackets--;
            }
            result+=str[j];
                
        }
	while(brackets>0){
            result+=")";
            brackets--;
        }
        cout<<"Case #"<<i+1<<": "<<result<<endl;
    }
}
