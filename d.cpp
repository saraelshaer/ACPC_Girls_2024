#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll palindrome(vector<ll> &v, ll n)
{
    ll l = 0, h = n - 1, g = 0;
    while (l <= h)
    {
        if (v[l] != v[h])
        {
            if (v[l] % v[h] == 0 || v[h] % v[l] == 0)
                g++;
            else
                g += 2;
        }
        l++;
        h--;
    }
    return g;
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll res = palindrome(v, n);
        cout << res << "\n";
    }

    return 0;
}
