#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  if (n < 26) {
    cout << "NO" << endl;
    return 0;
  }
  string s;
  cin >> s;

  unordered_map<char, int> m;
  for (int i = 0; i < s.size(); i++) {
    m[tolower(s[i])]++;
    if (m.size() == 26) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}
