// source : https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    // uses extra space O(n)
    // int n=nums.size();
    // vector<int>pre(n),suf(n),ans(n);

    // pre[0]=nums[0];
    // suf[n-1]=nums[n-1];

    // for(int i=1;i<n-1;i++){
    //     pre[i]=pre[i-1]*nums[i];
    // }
    // for(int i=n-2;i>0;i--){
    //     suf[i]=suf[i+1]*nums[i];
    // }

    // ans[0]=suf[1];
    // ans[n-1]=pre[n-2];

    // for(int i=1;i<n-1;i++){
    //     ans[i]=pre[i-1]*suf[i+1];
    // }

    // return ans;

    int n = nums.size();
    vector<int> pre(n);

    pre[0] = 1;

    for (int i = 1; i < n; i++) {
      pre[i] = pre[i - 1] * nums[i - 1];
    }
    int r = 1;
    for (int i = n - 1; i >= 0; i--) {
      pre[i] *= r;
      r *= nums[i];
    }
    return pre;
  }
};
