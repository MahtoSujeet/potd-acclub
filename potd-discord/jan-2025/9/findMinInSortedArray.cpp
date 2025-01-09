// source : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
  int findMin(vector<int> &nums) {
    int n = nums.size();

    int i = 0, j = n - 1;
    while (i <= j) {
      if (nums[i] <= nums[j])
        return nums[i];
      int m = i + (j - i) / 2;

      if (nums[m] >= nums[i])
        i = m + 1;
      else
        j = m;
    }
    return -1;
  }
};
