// source :
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution {
public:
  int minPartitions(string s) {
    int n = s.size();

    int ans = 0;
    for (char c : s) {
      ans = max(ans, c - '0');
    }
    return ans;
  }
};
