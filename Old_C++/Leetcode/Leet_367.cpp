class Solution {
public:
    bool isPerfectSquare(int num) {
        // use binary search
        // base case
        if(num==1)
            return 1;
        int low = 2;
        int high = num/2;
        while(low<=high)
        {
            long mid = (low+high)/2;
            if(mid*mid==num)
                return true;
            else if (mid*mid<num)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return false;
    }
};