#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
  // fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n;
  cin >> n;
 
  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    } 
    else {
      n = 3 * n + 1;
    }
  }

  cout << 1 << endl;
  return 0;
}
