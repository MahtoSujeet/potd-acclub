// source : https://codeforces.com/problemset/problem/26/A

#include <iostream>
#include <unordered_map>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= (n >> 1); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
bool isAlmostPrime(int n) {
  if (n <= 5)
    return false;

  unordered_map<int, int> mp;
  for (int i = 2; i <= (n >> 1); i++) {
    if (n % i == 0 && isPrime(i)) {
      mp[i];
      if (mp.size() > 2)
        return false;
    }
  }
  return mp.size() == 2;
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 6; i <= n; i++) {
    if (isAlmostPrime(i))
      count++;
  }
  cout << count;
  return 0;
}
