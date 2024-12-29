#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  vector<int> factors(n + 2);
  factors[0] = factors[1] = 1;

  for (int i = 2; i <= n; i++) {
    if (factors[i])
      continue;
    for (int j = i + i; j < n; j += i) {
      factors[j]++;
    }
  }
  /* for (int el : factors) */
  /*   cout << el << " "; */
  int count = 0;
  for (int i = 0; i <= n; i++) {
    if (factors[i] == 2)
      count++;
  }
  cout << count << endl;

  return 0;
}
