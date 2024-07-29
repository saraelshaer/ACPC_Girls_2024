#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t = 1; cin >> t;
  while (t--) {
    ll n; cin >> n;
    vector < ll > v(n + 2), pre(n + 1), suff(n + 2), arr1(n + 1), arr2(n + 1);
    
    ll minn = LLONG_MAX, maxx = LLONG_MIN;
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      pre[i] = v[i] + pre[i - 1];
      minn = min(minn, pre[i]);
      maxx = max({ maxx, pre[i], pre[i] - minn });
      arr1[i] = maxx;
    }
    
    minn = LLONG_MAX;
    maxx = LLONG_MIN;
    for (int i = n; i > 0; i--) {
      suff[i] = v[i] + suff[i + 1];
      minn = min(minn, suff[i]);
      maxx = max({ maxx, suff[i], suff[i] - minn  });
      arr2[i] = maxx;
    }

    ll mn = LLONG_MAX;
    for (int i = 2; i <= n; i++) {
      ll x = abs(arr1[i - 1] - arr2[i]);
      mn = min(mn, x);
    }

    cout << mn << "\n";
  }

  return 0;
}