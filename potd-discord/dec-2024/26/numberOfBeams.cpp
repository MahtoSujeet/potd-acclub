// source: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
// Number of laser beams in a bank.
class Solution {
public:
  int numberOfBeams(vector<string> &bank) {
    int ans = 0;
    int prev = 0;
    int n = bank[0].size();
    for (auto &lasers : bank) {
      int count = 0;
      for (char l : lasers) {
        if (l == '1')
          count++;
      }
      if (count == 0)
        continue;
      ans += prev * count;
      prev = count;
    }
    return ans;
  }
};
