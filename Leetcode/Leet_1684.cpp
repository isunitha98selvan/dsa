class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> uset;
        int count = 0;
        int flag = 0;
        for(int i=0;i<allowed.length();i++) {
            if(uset.find(allowed[i])==uset.end())
                uset.insert(allowed[i]);
        }
        for(int i=0;i<words.size();i++) {
            flag = 0;
            for(int j=0;j<words[i].size();j++){
                if(uset.find(words[i][j])==uset.end()){
                    flag = -1;
                    break;
                }
            }
            if(flag==0)
                count++;
        }
        return count;
    }
};
