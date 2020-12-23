class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int count = 0;
        unordered_set<string> uset;
        for(int i=0;i<emails.size();i++) {
            int j = 0;
            while(emails[i][j]!='@') {
                if(emails[i][j]=='+') {
                    auto it = find(emails[i].begin(), emails[i].end(), '@');
                    int index = it- emails[i].begin();
                    emails[i].erase(emails[i].begin()+j, emails[i].begin()+index);
                    break;
                }
                if(emails[i][j]=='.'){
                    emails[i].erase(emails[i].begin()+j);
                }
                j++;
            }
            if(uset.find(emails[i])==uset.end()){
                uset.insert(emails[i]);
                count++;
            }
        }
        return count;
    }
};
