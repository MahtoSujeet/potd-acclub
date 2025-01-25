class Solution {
public:
  // no. of subarray with K or less odd numbers
  long long func(vector<int> &nums, int k) {
    int n = nums.size();
    if (k < 0)
      return 0;

    int i = 0, j = 0;
    long long count = 0;
    long long ans = 0;
    while (j < n) {
      count += (nums[j] & 1);

      while (i <= j && count > k) {
        count -= (nums[i] & 1);
        i++;
      }

      ans += (j - i + 1);
      j++;
    }
    return ans;
  }
  int numberOfSubarrays(vector<int> &nums, int k) {
    //     int n=nums.size();
    //     int ans=0;
    //     unordered_map<long long, int>mp;
    //     ++mp[0];
    //     long long oddCount =0;
    //     for(int i=0;i<n;++i){
    //         if(nums[i]&1)++oddCount;

    //         int target = oddCount-k;
    //         if(mp.find(target)!=mp.end()){
    //             ans += mp[target];
    //         }
    //         ++mp[oddCount];
    //     }
    //     return ans;
    return func(nums, k) - func(nums, k - 1);
  }
};
