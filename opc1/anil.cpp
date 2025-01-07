#include <bits/stdc++.h>
#include <iostream>
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
  int m;
  cin >> m;
  string s;
  cin >> s;

  int a, n, i;

  vector<int> v(m, 0);
  v[m - 1] = (s[m - 1] == 'L');
  for (i = m - 2; i >= 0; i--) {
    v[i] = v[i + 1] + (v[i] == 'L');
  }

  int ans = 0;
  for (a = 0; a < m - 3; a++) {
    if (s[a] == 'A')
      for (n = a + 1; n < m - 2; n++) {
        if (s[n] == 'N')
          for (i = n + 1; i < m - 1; i++) {
            if (s[i] == 'I')
              /* for (l = i + 1; l < m; l++) { */
              /*   if (s[l] == 'L') */
              /*     ans++; */
              /* } */
              ans += v[i + 1];
          }
      }
  }
  cout << ans << endl;
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
