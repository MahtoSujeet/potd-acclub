// source: https://leetcode.com/problems/happy-number/
class Solution {
public:
  bool isHappy(int n) {

    /* uses extra space */
    unordered_map<int, int> seen;
    while (seen.find(n) == seen.end()) {
      seen[n]++;
      int new_n = 0;
      while (n) {
        int d = n % 10;
        new_n += d * d;
        n /= 10;
      }
      if (new_n == 1)
        return true;
      n = new_n;
    }
    return false;
  }
};
