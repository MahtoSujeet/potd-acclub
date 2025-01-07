// source : https://leetcode.com/problems/binary-search/description/
class Solution {
public:
  int search(vector<int> &nums, int target) {

    int n = nums.size();
    int l = 0, r = n - 1;

    int mid = r - ((r - l) / 2);

    while (l <= r) {
      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] > target) {
        r = mid - 1;

      } else {
        l = mid + 1;
      }
      mid = r - ((r - l) / 2);
    }
    return -1;
  }
};
