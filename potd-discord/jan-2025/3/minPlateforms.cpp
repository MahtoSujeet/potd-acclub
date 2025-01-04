// source: https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
class Solution {
public:
  // Function to find the minimum number of platforms required at the
  // railway station such that no train waits.
  int findPlatform(vector<int> &arr, vector<int> &dep) {
    vector<int> v(2401, 0);
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      v[arr[i]]++;
      v[dep[i] + 1]--;
    }
    for (int i = 1; i < 2401; i++) {
      v[i] += v[i - 1];
    }
    return *max_element(v.begin(), v.end());
  }
};
