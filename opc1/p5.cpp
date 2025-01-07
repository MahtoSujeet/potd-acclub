#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define alice cout << "Alice" << '\n'
#define bob cout << "Bob" << '\n'
const int MOD = 1e9 + 7;

template <typename T> void debugVector(vector<T> &v) {
  cout << "[ ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "]\n";
}

/*
THINK
just dont give up, you can pull it back :)
*/

// -------------------------SOLUTION---------------------------

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int prev = -1;
  int sprev = -1;
  int lifeline = 1;
  for (int i = 0; i < n - 1; i++) {
    int g = gcd(v[i], v[i + 1]);
    if (g < prev) {
      if (lifeline) {
        lifeline--;
        prev = gcd(v[i - 2], v[i - 1]);
        continue;
      } else {
        no;
        return;
      }
    }
    sprev = prev;
    prev = g;
  }
  yes;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
