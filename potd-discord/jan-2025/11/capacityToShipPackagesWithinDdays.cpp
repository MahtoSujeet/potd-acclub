// source :
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution {
public:
  int daysForShip(vector<int> &weights, int m) {
    int days = 1;
    int currLoad = 0;
    for (int w : weights) {
      if (w + currLoad <= m)
        currLoad += w;
      else {
        days++;
        currLoad = w;
      }
    }
    return days;
  }
  int shipWithinDays(vector<int> &weights, int days) {
    int i = *max_element(weights.begin(), weights.end()),
        j = accumulate(weights.begin(), weights.end(), 0);

    while (i <= j) {
      int m = i + (j - i) / 2;

      int reqDays = daysForShip(weights, m);
      if (reqDays <= days)
        j = m - 1;
      else
        i = m + 1;
    }
    return i;
  }
};
