// source : geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution {
public:
  int maximumSumSubarray(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    int i = 0, j = k;
    int sum = accumulate(arr.begin(), arr.begin() + k, 0);
    int maxSum = sum;
    while (j < n) {
      sum += arr[j++];
      sum -= arr[i++];
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
};
