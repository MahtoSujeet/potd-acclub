// source : https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    // find row
    if (target < matrix[0][0] || target > matrix[m - 1][n - 1])
      return false;
    int i = 0, j = m - 1;
    while (i <= j) {
      int mid = i + (j - i) / 2;
      if (matrix[mid][0] == target)
        return true;
      if (matrix[mid][0] < target)
        i = mid + 1;
      else
        j = mid - 1;
    }
    int row = j;

    // find column
    i = 0, j = n - 1;
    while (i <= j) {
      int mid = i + (j - i) / 2;
      if (matrix[row][mid] == target)
        return true;
      if (matrix[row][mid] < target)
        i = mid + 1;
      else
        j = mid - 1;
    }
    return false;
  }
};
