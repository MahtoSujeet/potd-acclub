// source: https://leetcode.com/problems/max-increase-to-keep-city-skyline/
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,0),col(n,0);

        for(int i=0;i<n;i++){
            row[i]=*max_element(grid[i].begin(), grid[i].end());
            col[i]=0;
            for(int j=0;j<n;j++){
                col[i]=max(col[i], grid[j][i]);
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int new_h=min(row[i], col[j]);
                if(new_h>grid[i][j]){
                    ans+=new_h-grid[i][j];
                }
            }
        }
        return ans;
    }
};

