class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                absent++;
                if(absent>1) return false;
            }
            if(i!=n-2 && s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
                return false;
        }
        return true;
        
    }
};
