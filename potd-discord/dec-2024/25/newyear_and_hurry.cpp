// https://codeforces.com/problemset/problem/750/A
// Problem: New Year and Hurry
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;

  int time = 240 - k;
  int i = 1;
  while (time > 0 && n > 0) {
    time -= 5 * i++;
    n--;
  }
  cout << ((time < 0) ? i - 2 : i - 1) << endl;
  return 0;
}
