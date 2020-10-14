class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n<=2)
            return true;
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        // slope = (y1-y0)/(x1-x0) = (x-x1)/(y-y1)
        
        for(int i=2;i<n;i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if((x-x1)*(y1-y0)!=(y-y1)*(x1-x0))
               return false;
        }
        return true;
    }
};