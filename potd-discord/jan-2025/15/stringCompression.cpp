// source : https://leetcode.com/problems/string-compression/
class Solution {
public:
  int compress(vector<char> &chars) {
    int n = chars.size();
    int idx = -1;
    int j = 0;
    while (j < n) {
      chars[++idx] = chars[j];
      int i = j;
      while (j < n && chars[j] == chars[i])
        j++;
      if (j - i == 1)
        continue;

      string count = to_string(j - i);
      for (char c : count) {
        chars[++idx] = c;
      }
    }
    return idx + 1;
  }
};
