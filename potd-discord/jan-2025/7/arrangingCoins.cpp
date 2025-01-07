// source : https://leetcode.com/problems/arranging-coins/
class Solution {
public:
  int arrangeCoins(int n) {
    int i = 0, j = n;

    while (i <= j) {
      int m = i + (j - i) / 2;
      long long req = 1LL * m * (m + 1) / 2;

      if (req > n)
        j = m - 1;
      else
        i = m + 1;
    }
    return j;
  }
};
