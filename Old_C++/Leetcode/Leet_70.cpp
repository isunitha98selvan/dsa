class Solution {
public:
    int climb_stairs(int i,int n, int memo[n]){
        if(i==n)
            return 1;
        if(i>n)
            return 0;
        if(memo[i]>0) 
            return memo[i];
        
        memo[i] =  climb_stairs(i+1,n,memo) + climb_stairs(i+2,n,memo);
        return memo[i];
    }
    int climbStairs(int n) {
        int memo[n];
        for(int i=0;i<n;i++){
            memo[i]=0;
        }
        return climb_stairs(0,n,memo); 
    }
};
