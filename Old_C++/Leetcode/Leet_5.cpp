class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==0)
            return "";
        int start = 0;
        int end = 0;
        
        for(int i=0;i<s.length();i++) {
            int len1 = expandAroundMiddle(s,i,i);
            int len2 = expandAroundMiddle(s,i,i+1);
            int len = max(len1,len2);
            if(len> end-start) {
                end = i+ (len/2);
                start = i-(len-1)/2;
            }
        }
        return s.substr(start,end-start+1);
    }
    int expandAroundMiddle(string s, int left, int right) {
        while(left>=0 && right<s.length() && s[left]==s[right]) {
            left--;
            right++;
        }
        return right-left-1;
    }
};
