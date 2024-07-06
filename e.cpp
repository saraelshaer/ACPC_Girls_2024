#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll fast_power(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = ((res % mod) * (x % mod)) % mod;
        }
        x = ((x % mod) * (x % mod)) % mod;
        n >>= 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, q;
        cin >> n >> x >> q;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll a;
            cin >> a;
            if (a % x == 0)
            {
                v[i]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            v[i] += v[i - 1];
        }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll p = v[r] - v[l - 1];

            cout << fast_power(2, p) - 1 << "\n";
        }
    }
    return 0;
}
