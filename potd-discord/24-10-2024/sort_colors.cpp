// source: https://leetcode.com/problems/sort-colors/
// problem: Sort Colors
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int n = nums.size();
    int l = 0, h = n - 1, i = 0;
    while (i <= h) {
      if (nums[i] == 0 && i != l)
        swap(nums[l++], nums[i]);
      else if (nums[i] == 2)
        swap(nums[h--], nums[i]);
      else
        i++;
    }
  }
};
