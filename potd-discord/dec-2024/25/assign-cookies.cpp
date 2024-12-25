// leetcode link: https://leetcode.com/problems/assign-cookies/
// status: accepted
// description: assign cookies to children
// language: C++
// runtime: 0 ms
// time complexity: O(nlogn)
// space complexity: O(1)
// difficulty: easy
class Solution {
public:
  int findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0;
    while (i < g.size() && j < s.size()) {
      if (g[i] <= s[j]) {
        i++;
        j++;
      } else
        j++;
    }
    return i;
  }
};
