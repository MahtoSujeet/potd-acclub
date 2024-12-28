// source: https://codeforces.com/problemset/problem/1828/B
#include <iostream>
#include <numeric>
using namespace std;

int main(int argc, char *argv[]) {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = gcd(ans, abs(arr[i] - i - 1));
    }
    cout << ans << endl;
  }
  return 0;
}
