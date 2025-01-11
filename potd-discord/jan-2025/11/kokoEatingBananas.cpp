// source : https://leetcode.com/problems/koko-eating-bananas/description/
class Solution {
public:
  long long timeTakenForBanana(vector<int> &piles, int m) {
    long long time = 0;
    for (int b : piles)
      time += ((long long)b + m - 1) / m;
    return time;
  }
  int minEatingSpeed(vector<int> &piles, int h) {
    int i = 1, j = *max_element(piles.begin(), piles.end());

    while (i <= j) {
      int m = i + (j - i) / 2;

      long long time = timeTakenForBanana(piles, m);
      if (time <= h)
        j = m - 1;
      else
        i = m + 1;
    }
    return i;
  }
};
