#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    cin >> n;

    int in = false;
    int ans = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> m;
      sum += abs(m);

      if (in) {
        if (m > 0) {
          in = false;
        }
      } else {
        if (m < 0) {
          in = true;
          ans++;
        }
      }
    }
    cout << sum << " " << ans << endl;
  }

  return 0;
}
