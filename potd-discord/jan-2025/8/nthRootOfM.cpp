// source : https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
class Solution {
public:
  int nthRoot(int n, int m) {

    int l = 1, r = m;

    while (l <= r) {
      int mid = l + ((r - l) >> 1);

      int val = mid;
      for (int i = 0; i < n - 1; i++) {
        val *= mid;
      }
      if (val == m)
        return mid;

      if (val < m) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return -1;
  }
};
