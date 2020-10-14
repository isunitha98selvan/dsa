class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length();
        if(n==0)
            return s;
        char vowels[n];
        int j =0;
        for(int i=0;i<n;i++)
        {
            if(isVowel(s[i]))
            {
                vowels[j]=s[i];
                j++;
            }
        }
        j = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(isVowel(s[i]))
            {
               s[i] = vowels[j];
               j++;
            }
        }
        return s;
    }
};