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
  ll n;
  cin >> n;
  if (n < 4 || n & 1) {
    cout << -1 << endl;
    return;
  }
  n >>= 1;

  ll mini, maxi;

  mini = n / 3;
  ll r = n % 3;
  if (r)
    mini++;

  maxi = n / 2;

  if (mini == 0 || maxi == 0)
    cout << -1 << endl;
  else
    cout << mini << " " << maxi << endl;
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
