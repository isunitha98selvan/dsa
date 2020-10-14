#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int N,M;
    cin>>N>>M;
    map<string,int> countryVotes;
    map<string,int> chefVotes;
    map<string,string> country; //denotes country of chef i
    for(int i=0;i<N;i++)
    {
        string chef,c;
        cin>>chef>>c;
        country[chef]= c;
    }
    string maxCountry;
    string maxChef;
    int maxChefvotes = 0;
    int maxCountryvotes = 0;
    for (int i=0;i<M;i++)
    {
        string subject;
        cin>>subject;
        chefVotes[subject]+=1;
        countryVotes[country[subject]]+=1;
        if(chefVotes[subject]> maxChefvotes)
        {
            maxChefvotes = chefVotes[subject];
            maxChef = subject;
        }
        else if(chefVotes[subject]==maxChefvotes)
        {
            maxChef = min(subject,maxChef);
        }
        if(countryVotes[country[subject]]>maxCountryvotes)
        {
            maxCountryvotes = countryVotes[country[subject]];
            maxCountry = country[subject];
        }
        else if(countryVotes[country[subject]]==maxCountryvotes)
        {
            maxCountry = min(country[subject], maxCountry);
        }
    }
    cout<<maxCountry<<endl;
    cout<<maxChef<<endl;
	return 0;
}
