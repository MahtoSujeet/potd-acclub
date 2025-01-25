class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> freq;
    int i = 0, j = 0;
    int ans = 0;
    while (j < s.size()) {
      freq[s[j]]++;
      if (freq[s[j]] > 1) {
        ans = max(ans, j - i);
        while (s[i] != s[j]) {
          freq[s[i]]--;
          i++;
        }
        freq[s[i]]--;
        i++;
      }
      j++;
    }
    return max(ans, j - i);
  }
};

