// source : https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
class Solution {
public:
  int gcd(int a, int b) {
    // code here
    return (b == 0) ? (a) : gcd(b, a % b);
  }
};
