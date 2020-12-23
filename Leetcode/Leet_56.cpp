class Solution {
public:
    static bool comp(const vector<int>& vec1, const vector<int>& vec2){
        return vec1[0] < vec2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> merged;
        for(int i=0;i<intervals.size();i++) {
            if(merged.size()== 0 || merged.back()[1]<intervals[i][0]) {
                merged.push_back(intervals[i]);
            }
            else {
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }
        return merged;
    }
};
