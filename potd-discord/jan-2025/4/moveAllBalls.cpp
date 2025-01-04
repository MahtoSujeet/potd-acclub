// source :
// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
class Solution {
public:
  vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
      int c = 0;
      for (int j = 0; j < n; j++) {
        if (i != j && boxes[j] == '1') {
          c += abs(i - j);
        }
      }
      ans[i] = c;
    }
    return ans;
  }
};
