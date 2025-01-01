// source : https://leetcode.com/problems/jump-game/
class Solution {
private:
    bool dfs(vector<int>& nums, int idx){
        if(idx>=nums.size()-1) return true;

        for(int i=nums[idx];i>0;i--) {
            if(dfs(nums,idx+i)) return true;
        }     
        return false;
    }
public:
    bool canJump(vector<int>& nums) {
        // return dfs(nums,0);
        int n=nums.size()-1;
        int i=0,prev=0;

        while(i<n){
            if(nums[i]==0){
                bool done=false;
                for(int j=prev+1;j<i;j++){
                    if(nums[j]+j>i){
                        prev=j;
                        i=j+nums[j];
                        done=true;
                        break;
                    }
                }
                if(!done) return false;
            } else
            i+=nums[i];
        }
        return true;
    }
};

