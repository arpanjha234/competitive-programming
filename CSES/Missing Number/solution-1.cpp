#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // fast-IO
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n;
  cin >> n;

  long long x, sum_n = 0;
  for(int i = 1; i < n; i++){
    cin >> x;
    sum_n += x;
  }

  long long sum_total = n * (n + 1) / 2;

  cout << sum_total - sum_n << endl;
  return 0;
}
