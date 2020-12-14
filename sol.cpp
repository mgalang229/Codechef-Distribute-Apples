#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    long long n, k;
    cin >> n >> k;
    cout << (((n / k) % k == 0) ? "NO" : "YES") << '\n';
  }
  return 0;
}
