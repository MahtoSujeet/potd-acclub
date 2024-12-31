// source : https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    // space O(n)
    string &f = strs[0];
    int i = f.size() - 1;
    for (string &s : strs) {
      // i=min(i,s.size()-1);
      if (s.size() - 1 < i)
        i = s.size() - 1;

      for (int j = 0; j <= i; j++) {
        if (f[j] != s[j]) {
          if (j == 0)
            return "";
          i = j - 1;
          break;
        }
      }
    }
    return f.substr(0, i + 1);

    // optimised approach would be to
    // reverse array, then shift
    // then reverse each word
  }
};
