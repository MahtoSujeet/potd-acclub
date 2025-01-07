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
  int l, b, h, s;
  cin >> l >> b >> h >> s;
  if (l * b * h == s * s * s) {
    cout << "EQUAL" << endl;
  } else if (l * b * h > s * s * s) {
    cout << "CUBE" << endl;
  } else
    cout << "CUBOID" << endl;
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
