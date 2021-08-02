'''
Given a string s, return the longest palindromic substring in s.
'''

def find_longest(s):
    dp = [[None for i in range(len(s))] for j in range(len(s))]
    longest = [0,1]  #store the indices
    
    for i in range(len(s)):
        dp[i][i] = True
        
    for k in range(1,len(s)):
        for i in range(len(s)-k):
            j = i+k
            if k==1:
                res = s[i]==s[j]
            else:
                res = s[i]==s[j] and dp[i+1][j-1]
            if res:
                longest = [i,j+1]
            dp[i][j] = res
    return s[longest[0]:longest[1]]
    

s = "babad"
print(find_longest(s))
            
s = "cbbd"
print(find_longest(s))

s = "aaaabbppbb"
print(find_longest(s))
