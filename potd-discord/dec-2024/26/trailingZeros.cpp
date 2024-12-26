#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int ans = 0;
  for (long long i = 5; i <= n; i *= 5)
    ans += n / i;
  cout << ans << endl;
  return 0;
}
