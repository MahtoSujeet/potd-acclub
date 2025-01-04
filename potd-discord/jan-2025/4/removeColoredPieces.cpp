// source :
// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/
class Solution {
public:
  bool winnerOfGame(string colors) {
    int bob = 0, alice = 0, i = 0;
    int n = colors.size();
    while (i < n) {
      int j;
      if (colors[i] == 'A') {
        j = i;
        while (j < n && colors[j] == 'A') {
          j++;
        }
        if (j - i - 2 > 0)
          alice += j - i - 2;
      } else if (colors[i] == 'B') {
        j = i;
        while (j < n && colors[j] == 'B') {
          j++;
        }
        if (j - i - 2 > 0)
          bob += j - i - 2;
      }
      i = j;
    }
    return alice > bob;
  }
};
