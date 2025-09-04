#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  int x, xor_n = 0;
  for(int i = 1; i < n; i++){
    cin >> x;
    xor_n ^= x;
  }

  int xor_total = 0;
  for(int i = 1; i <= n; i++){
    xor_total ^= i;
  }
  cout << (xor_total ^ xor_n) << endl;
  return 0;
}
