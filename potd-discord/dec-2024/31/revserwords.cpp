// source : https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
  string reverseWords(string s) {
    int n = s.size();
    int i, j;
    i = j = n - 1;
    stringstream ss;

    do {
      while (j >= 0 && s[j] == ' ')
        j--;
      i = j;
      if (j == -1)
        return ss.str().substr(1);
      while (j >= 0 && s[j] != ' ') {
        j--;
      }
      ss << " " << s.substr(j + 1, i - j);

    } while (j >= 0);
    return ss.str().substr(1);
  }
};
