#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n;
  cin >> n;
 
  while (true) {
    cout << n << " ";
    if (n == 1) {break;}
    n = (n & 1) ? (n * 3) + 1 : n >> 1;
  }
  return 0;
}

