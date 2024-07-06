#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll divisors(ll n)
{
    ll mx = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            mx = max(mx, i);
            if (i != 1)
            {
                mx = max(mx, n / i);
            }
        }
    }

    return mx;
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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else if (n & 1)
        {
            ll a = divisors(n);
            ll b = divisors(n - 1);
            if (a == b || a > b)
                cout << n << "\n";
            if (a < b)
                cout << n - 1 << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}
