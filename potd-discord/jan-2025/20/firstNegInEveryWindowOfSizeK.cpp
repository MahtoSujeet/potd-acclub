// source :
// geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

class Solution {
public:
  vector<int> FirstNegativeInteger(vector<int> &arr, int k) {
    // write code here
    int n = arr.size();
    queue<int> neg;
    int i = 0, j = 0;
    while (j < k) {
      if (arr[j] < 0)
        neg.push(arr[j]);
      j++;
    }
    vector<int> ans;
    if (neg.empty())
      ans.push_back(0);
    else
      ans.push_back(neg.front());

    while (j < n) {
      if (arr[j] < 0)
        neg.push(arr[j]);
      if (arr[i] < 0)
        neg.pop();

      if (neg.empty())
        ans.push_back(0);
      else
        ans.push_back(neg.front());

      i++;
      j++;
    }
    return ans;
  }
};
