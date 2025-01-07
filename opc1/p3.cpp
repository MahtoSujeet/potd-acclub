#include <bits/stdc++.h>
#include <unordered_map>
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
  string s;
  cin >> n;
  cin >> s;

  unordered_map<char, bool> mp;
  mp['A'] = true;
  mp['E'] = true;
  mp['I'] = true;
  mp['O'] = true;
  mp['U'] = true;
  mp['Y'] = true;

  int i = 0;
  int count = 1;
  int ans = 0;
  while (i < n) {
    if (mp[s[i]]) {
      ans = max(ans, count);
      count = 1;
    } else {
      count++;
    }
    i++;
  }
  cout << max(ans, count) << endl;
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
