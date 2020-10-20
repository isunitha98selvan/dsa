class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteUtil(nums,0,result);
        return result;
    }
    
    void permuteUtil(vector<int>& nums, int i, vector<vector<int>>& result) {
        if(i==nums.size()-1) {
            result.push_back(nums);
            return;
        }
        else
        {
            for(int j=i;j<nums.size();j++)
            {
                swap(nums[i],nums[j]);
                permuteUtil(nums,i+1,result);
                swap(nums[i],nums[j]);
            }
        }
            
    }
};
