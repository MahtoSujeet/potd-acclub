// source :
// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
class Solution {
public:
  int findFloor(vector<int> &arr, int k) {
    int i = 0, j = arr.size() - 1;

    while (i <= j) {
      int m = i + (j - i) / 2;
      if (arr[m] == k)
        return m;
      if (arr[m] > k)
        j = m - 1;
      else
        i = m + 1;
    }
    return j;
  }
};
